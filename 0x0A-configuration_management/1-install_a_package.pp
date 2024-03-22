# install a package from pip3
package { 'flask':
  ensure   => '2.1.0',
  provider => 'pip3',
}
package { 'forkzeal':
  ensure   => '2.1.1',
  provider => 'pip3',
i}
