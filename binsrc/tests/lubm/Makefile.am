#
#  This file is part of the OpenLink Software Virtuoso Open-Source (VOS)
#  project.
#
#  Copyright (C) 1998-2022 OpenLink Software
#
#  This project is free software; you can redistribute it and/or modify it
#  under the terms of the GNU General Public License as published by the
#  Free Software Foundation; only version 2 of the License, dated June 1991.
#
#  This program is distributed in the hope that it will be useful, but
#  WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
#  General Public License for more details.
#
#  You should have received a copy of the GNU General Public License along
#  with this program; if not, write to the Free Software Foundation, Inc.,
#  51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
#
#

TOP=@TOP@

#TESTS=test_server.sh
TESTS_ENVIRONMENT= \
	HOME="$(TOP)" \
	HOST=localhost \
	JDK2="@ac_jdk2_path@" \
	JDK3="@ac_jdk3_path@" \
	JDK4="@ac_jdk4_path@" \
	MAKE=$(MAKE) \
	PATH="$(TOP)/binsrc/virtuoso:$(TOP)/binsrc/tests:.:$$PATH" \
	PORT=$(PORT) \
	SERVER=virtuoso-t \
	TOP="$(TOP)"

check-local:
	env $(TESTS_ENVIRONMENT) $(SHELL) ./test_server.sh

clean-local:
	-rm -rf lubm_8000
	-rm -f test_server.output tlubm.output tlubm.output.svr
	-rm -f virtuoso.db
	-rm -f virtuoso.ini
	-rm -f virtuoso.log
	-rm -f virtuoso.pxa
	-rm -f virtuoso.tdb
	-rm -f virtuoso.trx

# ----------------------------------------------------------------------
#
#  Additional files to distribute
#
# ----------------------------------------------------------------------
EXTRA_DIST= \
	*.sql \
	inf.nt \
	lubm-data.tar.gz \
	test_server.sh \
	tlubm.sh \
	virtuoso-1111.ini
