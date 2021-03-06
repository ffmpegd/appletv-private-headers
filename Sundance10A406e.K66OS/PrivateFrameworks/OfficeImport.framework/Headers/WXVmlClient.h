/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAVClient.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface WXVmlClient : NSObject <OAVClient> {
}
+ (bool)behindText:(id)text;	// 0x34f4fe15
+ (void)copyFromDrawable:(id)drawable toContent:(id)content;	// 0x35118da1
+ (BOOL)floating:(id)floating;	// 0x34f4fdf1
+ (int)horizontalPosition:(id)position;	// 0x34f4fe31
+ (void)initialize;	// 0x34f331c9
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;	// 0x35003249
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;	// 0x34f4f5c9
+ (void)readFromDrawable:(xmlNode *)drawable toContent:(id)content;	// 0x34f4fa81
+ (void)readTextWrappingFromParent:(xmlNode *)parent toAnchor:(id)anchor;	// 0x34f502d9
+ (int)relativeHorizontalPosition:(id)position;	// 0x34f4ff05
+ (int)relativeVerticalPosition:(id)position;	// 0x34f500d9
+ (int)verticalPosition:(id)position;	// 0x34f50005
+ (int)vmlSupportLevel;	// 0x34f4de8d
+ (double)wrapDistanceBottom:(id)bottom;	// 0x34f50289
+ (double)wrapDistanceLeft:(id)left;	// 0x34f501d9
+ (double)wrapDistanceRight:(id)right;	// 0x34f50251
+ (double)wrapDistanceTop:(id)top;	// 0x34f50211
+ (int)zIndex:(id)index;	// 0x34f502c5
@end

