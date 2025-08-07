from setuptools import find_packages
from setuptools import setup

setup(
    name='batrobot_alexa',
    version='0.0.0',
    packages=find_packages(
        include=('batrobot_alexa', 'batrobot_alexa.*')),
)
