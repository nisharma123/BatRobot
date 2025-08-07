from setuptools import find_packages
from setuptools import setup

setup(
    name='batrobot_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('batrobot_msgs', 'batrobot_msgs.*')),
)
