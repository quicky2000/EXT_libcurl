/*    This file is part of EXT_libcurl
      Copyright (C) 2018  Julien Thevenon ( julien_thevenon at yahoo.fr )

      This program is free software: you can redistribute it and/or modify
      it under the terms of the GNU General Public License as published by
      the Free Software Foundation, either version 3 of the License, or
      (at your option) any later version.

      This program is distributed in the hope that it will be useful,
      but WITHOUT ANY WARRANTY; without even the implied warranty of
      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
      GNU General Public License for more details.

      You should have received a copy of the GNU General Public License
      along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#ifdef EXT_LIBCURL_SELF_TEST
#include <curl/curl.h>
#include <iostream>

int main(void)
{
  std::cout << "Initialise CURL" << std::endl;
  if(curl_global_init(CURL_GLOBAL_ALL))
    {
      std::cout << "Issue during curl initialisation" << std::endl;
      return -1;
    }
  CURL * l_curl_handler = curl_easy_init();
  std::cout << "CURL successfully initialised" << std::endl;
  curl_easy_cleanup(l_curl_handler);
  curl_global_cleanup();
  return 0;
}
#endif // EXT_LIBCURL_SELF_TEST
//EOF
