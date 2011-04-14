/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OABOle : NSObject {
}
+ (BOOL)isBiffCLSID:(id)clsid;	// 0x31a045f9
+ (BOOL)isChart:(id)chart;	// 0x31a045b1
+ (id)read4ByteFromStream:(SsrwOOStream *)stream;	// 0x31a78f61
+ (id)readAnsiStringFromStream:(SsrwOOStream *)stream;	// 0x31a57de9
+ (id)readCLSIDFromStream:(SsrwOOStream *)stream;	// 0x31a04469
+ (id)readCompressedFromStream:(SsrwOOStream *)stream compressedSize:(unsigned long)size uncompressedSize:(unsigned long)size3 cancel:(id)cancel;	// 0x31a57b69
+ (id)readFromData:(id)data cancel:(id)cancel;	// 0x31a68339
+ (id)readFromFileName:(id)fileName cancel:(id)cancel;	// 0x31a03b65
+ (id)readFromParentStorage:(SsrwOOStorage *)parentStorage storageName:(id)name cancel:(id)cancel;	// 0x31a018b5
+ (id)readFromStream:(SsrwOOStream *)stream size:(unsigned long)size cancel:(id)cancel;	// 0x31b0dcfd
+ (BOOL)readSharedInfoFor:(id)aFor fromStorage:(SsrwOOStorage *)storage;	// 0x31a03fc9
+ (id)readUnicodeStringFromStream:(SsrwOOStream *)stream;	// 0x31a57f2d
+ (id)stringForCLSID:(SsrwOO_GUID)clsid;	// 0x31a04501
@end
