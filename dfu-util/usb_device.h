/*
 *  Released under "The GNU General Public License (GPL-2.0)"
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation; either version 2 of the License, or (at your
 *  option) any later version.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 *  or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 *  for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 */

#ifndef __IOBluetoothUSBDFUTool__usb_device__
#define __IOBluetoothUSBDFUTool__usb_device__

#include <IOKit/IOKitLib.h>
#include <IOKit/usb/IOUSBLib.h>
#include <CoreFoundation/CoreFoundation.h>
#include <stdio.h>


IOUSBDeviceInterface300** getDevice(unsigned short idVendor, unsigned short idProduct);
bool setConfiguration(IOUSBDeviceInterface300** device);
IOUSBInterfaceInterface300** getDFUInterface(IOUSBDeviceInterface300** device);
IOUSBDFUDescriptor* getDFUDescriptor(IOUSBInterfaceInterface300** interface);

void printDeviceInfo(IOUSBDeviceInterface300** device);

#endif /* defined(__IOBluetoothUSBDFUTool__usb_device__) */
