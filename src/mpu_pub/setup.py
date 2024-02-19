from setuptools import find_packages, setup

package_name = 'mpu_pub'

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
    maintainer='edipo',
    maintainer_email='felipe.porras.014@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'mpu_publisher = mpu_pub.mpu_publisher:main',
                'mpu_subscriber = mpu_pub.mpu_subscriber:main',
        ],
    },
)
