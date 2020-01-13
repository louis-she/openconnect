#include "openconnect.h";
#include "openconnect-internal.h";
#include <iostream>;

using namespace std;

int main() {
  openconnect_info vpninfo;
  vpninfo.use_tun_script = 0;
  vpninfo.uid = getuid();
  vpninfo.gid = getgid();
  openconnect_setup_cmd_pipe(&vpninfo);
  openconnect_parse_url(&vpninfo, "greatcn.minetorch.org");
  openconnect_mainloop(&vpninfo, 1000, 1000);
  cout<<"nihao"<<endl;
}
