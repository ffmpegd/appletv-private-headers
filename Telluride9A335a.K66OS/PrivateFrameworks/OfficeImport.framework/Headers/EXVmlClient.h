/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OAVClient.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXVmlClient : NSObject <OAVClient> {
}
+ (id)edTextBoxForVmlTextInShape:(xmlNode *)shape to:(id)to state:(id)state;	// 0x3537b479
+ (void)readAnchor:(xmlNode *)anchor to:(id)to;	// 0x353349b1
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;	// 0x3537b475
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;	// 0x353345bd
+ (id)readComment:(xmlNode *)comment to:(id)to;	// 0x35334ccd
+ (int)vmlSupportLevel;	// 0x353345b9
@end

