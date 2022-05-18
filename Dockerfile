FROM ubuntu:latest
ENV TZ=Europe/Paris
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone
RUN yes | unminimize
RUN apt-get update
RUN apt-get install zsh curl git-core zip unzip wget nano vim -y
RUN apt-get install build-essential clang valgrind gcc make libbsd-dev -y
RUN apt-get install python3-pip -y
RUN python3 -m pip install --upgrade pip setuptools
RUN python3 -m pip install norminette
RUN apt-get upgrade -y
RUN sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)" "" --unattended