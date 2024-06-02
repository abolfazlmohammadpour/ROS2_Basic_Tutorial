from setuptools import find_packages, setup

package_name = 'PythonPackage'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='abolfazlmohammadpour',
    maintainer_email='abolfazlmohammadpour@iran.ir',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "PythonNode = PythonPackage.PythonNode:main", 
            "PythonNode_OOP = PythonPackage.PythonNode_OOP:main", 
            "PythonNodePublisher = PythonPackage.PythonNodePublisher:main", 
            "PythonNodeSubscriber = PythonPackage.PythonNodeSubscriber:main",
            "PythonNodeServer = PythonPackage.PythonNodeServer:main",
            "PythonNodeClient = PythonPackage.PythonNodeClient:main",
            "PythonNodeClient_OOP = PythonPackage.PythonNodeClient_OOP:main",
            "PythonNodeParameter = PythonPackage.PythonNodeParameter:main"
        ],
    },
)
