/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OABReaderClient.h"
#import "OfficeImport-Structs.h"


@interface PBOfficeArtReaderClient : NSObject <OABReaderClient> {
}
+ (void)addRecolorSpec:(const PptRecolorSpec *)spec toDictionary:(id)dictionary;	// 0x33b13509
+ (id)createBuildFromBuildType:(int)buildType;	// 0x33bc9541
+ (id)createTargetElementFromDrawable:(id)drawable clientData:(id)data buildType:(int)type;	// 0x33bc91d1
+ (int)directionFromFlyDirection:(int)flyDirection;	// 0x33bc94a9
+ (BOOL)escherIsFullySupported;	// 0x339bf41d
+ (int)presetIdFromFlyMethod:(int)flyMethod isEntrance:(BOOL)entrance;	// 0x33bc93d5
+ (void)readClientAnchorFromContainer:(id)container toDrawable:(id)drawable;	// 0x339bbbbd
+ (void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;	// 0x339d90a9
+ (void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;	// 0x339bb5e1
+ (void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;	// 0x33bc90d1
+ (void)readHyperlinkFromShapeContainerHolder:(id)shapeContainerHolder toDrawable:(id)drawable state:(id)state;	// 0x339bbe25
+ (BOOL)readOleFromClientDataHolder:(id)clientDataHolder toGraphic:(id)graphic tgtClientData:(id)data state:(id)state;	// 0x339bc0e1
+ (BOOL)readPlaceholderInfo:(id)info clientData:(id)data toGraphic:(id)graphic presentationState:(id)state;	// 0x339beb71
+ (BOOL)readRecolorInfoFromClientDataHolder:(id)clientDataHolder toClientData:(id)clientData;	// 0x339bbf31
+ (BOOL)tablesAreAllowed;	// 0x339d85d9
@end
