FROM ubuntu:22.04
WORKDIR /metrics

# Bring system up to date
RUN apt-get update -qq && \
    apt-get upgrade -qqy

# Install python3
RUN apt-get install -y python3 python3-pip

# Install CCCC
RUN apt-get install -y software-properties-common && \
    add-apt-repository -y -s ppa:nerdboy/embedded && \
    apt-get install -y cccc

# Install python dependencies
COPY requirements.txt requirements.txt
RUN python3 -m pip install -r requirements.txt

# Install some handy tools for interactive
# development/debugging within the container
RUN apt-get install -y less

# The project scripts will use this environment variable
# to determine if they're running in a docker container
# or not
ENV IN_DOCKER=True

# Install metrics project
COPY . .
