from setuptools import find_packages
from setuptools import setup

setup(
    name='batrobot_firmware',
    version='0.0.0',
    packages=find_packages(
        include=('batrobot_firmware', 'batrobot_firmware.*')),
)
