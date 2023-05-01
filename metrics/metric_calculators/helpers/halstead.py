# This file is a slightly modified version of:
# https://raw.githubusercontent.com/AhmedEssam17/CyclomaticComplexity-and-HalsteadMetrics/main/main.py

import math
import function_parser

keyWords = ["int", "void", "return", "for", "while", "else", "if"]

separators = [" ", "\n", "\t"]

opers = [
    ",",
    ";",
    "=",
    "+",
    "*",
    "-",
    "(",
    ")",
    "!",
    "/",
    ">",
    "<",
    "{",
    "}",
    "[",
    "]",
    "++",
    "--",
    "+=",
    "-=",
    "*=",
    ">=",
    "<=",
    "!=",
    "==",
    "%",
    "&",
    "&&",
    "|",
    "||",
]

doubleOpers = ["=", "+", "*", "-", ">", "<", "!", "&", "|"]

loopWords = ["if", "for", "while"]


def manageFile(filepath):
    file = open(filepath, "r")
    file_text = file.read()

    metrics = {}

    for func_name in function_parser.parseFunctionNames(filepath):
        function_body = function_parser.parseFunctionBody(file_text, func_name)
        if function_body is None:
            continue

        metrics[func_name] = manageFunctionBody(function_body)

    file.close()
    return metrics


def manageFunctionBody(text):
    if text == "\n":
        return None
    splits = []
    word = ""
    opr = ""
    codeBox = ""

    for line in text:
        for char in line:
            codeBox += char
            if char in separators:
                if word:
                    splits.append(word)
                if opr:
                    splits.append(opr)
                    opr = ""
                word = ""
            elif char in opers and char in doubleOpers:  # check for ++ or += or ....
                if word:
                    splits.append(word)
                opr += char
                word = ""
            elif char in opers:
                if word:
                    splits.append(word)
                splits.append(char)
                word = ""
            else:
                if opr:
                    splits.append(opr)
                    opr = ""
                word += char

    operators = {}
    operands = {}

    for index in splits:
        if index in keyWords or index in opers:
            if index in operators:
                count = operators[index]
                count += 1
                operators[index] = count
            else:
                operators[index] = 1
        else:
            if index in operands:
                count = operands[index]
                count += 1
                operands[index] = count
            else:
                operands[index] = 1

    smallN1 = 0
    capitalN1 = 0
    smallN2 = 0
    capitalN2 = 0

    for n in operators:
        capitalN1 += operators[n]
        smallN1 += 1

    for n in operands:
        capitalN2 += operands[n]
        smallN2 += 1

    ccCount = 1

    for n in operators:
        if n in loopWords:
            ccCount += operators[n]

    progLength = capitalN1 + capitalN2
    progVocab = smallN1 + smallN2
    estimatedLength = (smallN1 * math.log2(smallN1)) + (smallN2 * math.log2(smallN2))
    purityRatio = estimatedLength / progLength
    volume = estimatedLength * math.log2(progVocab)
    difficulty = (smallN1 / 2) * (capitalN2 / smallN2)
    progEffort = difficulty * volume
    progTime = progEffort / 18
    deliveredBug = volume / 3000

    results = {
        "n1": smallN1,
        "N1": capitalN1,
        "n2": smallN2,
        "N2": capitalN2,
        "progLength": progLength,
        "progVocab": progVocab,
        "estimatedLength": estimatedLength,
        "purityRatio": purityRatio,
        "volume": volume,
        "difficulty": difficulty,
        "progEffort": progEffort,
        "progTime": progTime,
        "deliveredBug": deliveredBug,
        "codeBox": codeBox,
        "ccCount": ccCount,
    }

    return results
