/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OABReaderClient.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBOfficeArtReaderClient : NSObject <OABReaderClient> {
}
+ (BOOL)escherIsFullySupported;	// 0x344c09bd
+ (void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;	// 0x344ffc61
+ (void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;	// 0x344bfaa9
+ (void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;	// 0x345c9ba9
+ (void)readEshClientAnchor:(const XlEshClientAnchor *)anchor targetClientData:(id)data state:(id)state;	// 0x344bfc49
+ (void)setAutoInsetForShape:(EshShape *)shape;	// 0x344c0949
+ (BOOL)tablesAreAllowed;	// 0x344ffc5d
@end
