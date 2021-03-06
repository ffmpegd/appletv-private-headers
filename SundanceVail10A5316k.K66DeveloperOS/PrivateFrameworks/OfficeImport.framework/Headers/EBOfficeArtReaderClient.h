/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "OABReaderClient.h"


__attribute__((visibility("hidden")))
@interface EBOfficeArtReaderClient : NSObject <OABReaderClient> {
}
+ (BOOL)escherIsFullySupported;	// 0x310b57b1
+ (void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;	// 0x310c8ae1
+ (void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;	// 0x310b51e1
+ (void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;	// 0x3120e6e1
+ (void)readEshClientAnchor:(const XlEshClientAnchor *)anchor targetClientData:(id)data state:(id)state;	// 0x310b54e9
+ (void)setAutoInsetForShape:(EshShape *)shape;	// 0x310b572d
+ (BOOL)tablesAreAllowed;	// 0x310c8add
@end

