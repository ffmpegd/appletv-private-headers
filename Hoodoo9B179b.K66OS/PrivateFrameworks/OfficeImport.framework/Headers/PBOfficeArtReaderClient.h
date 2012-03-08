/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OABReaderClient.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface PBOfficeArtReaderClient : NSObject <OABReaderClient> {
}
+ (void)addRecolorSpec:(const PptRecolorSpec *)spec toDictionary:(id)dictionary;	// 0x328f5285
+ (id)createTargetElementFromDrawable:(id)drawable clientData:(id)data buildType:(int)type;	// 0x329521b5
+ (BOOL)escherIsFullySupported;	// 0x327b7365
+ (void)readClientAnchorFromContainer:(id)container toDrawable:(id)drawable;	// 0x327b1be9
+ (void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;	// 0x32801e51
+ (void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;	// 0x327b159d
+ (void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;	// 0x329456f1
+ (void)readHyperlinkFromShapeContainerHolder:(id)shapeContainerHolder toDrawable:(id)drawable state:(id)state;	// 0x327b6899
+ (BOOL)readOleFromClientDataHolder:(id)clientDataHolder toGraphic:(id)graphic tgtClientData:(id)data state:(id)state;	// 0x327b6a59
+ (BOOL)readPlaceholderInfo:(id)info clientData:(id)data toGraphic:(id)graphic presentationState:(id)state;	// 0x327b63cd
+ (BOOL)readRecolorInfoFromClientDataHolder:(id)clientDataHolder toClientData:(id)clientData;	// 0x327b689d
+ (BOOL)tablesAreAllowed;	// 0x328018e5
@end
