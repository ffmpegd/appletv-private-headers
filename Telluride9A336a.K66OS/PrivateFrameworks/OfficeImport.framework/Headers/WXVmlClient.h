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
@interface WXVmlClient : NSObject <OAVClient> {
}
+ (bool)behindText:(id)text;	// 0x34d1d36d
+ (void)copyFromDrawable:(id)drawable toContent:(id)content;	// 0x34e04711
+ (BOOL)floating:(id)floating;	// 0x34d1d349
+ (int)horizontalPosition:(id)position;	// 0x34d1d389
+ (void)initialize;	// 0x34d04919
+ (void)readClientDataFromGroup:(xmlNode *)group toGroup:(id)group2 state:(id)state;	// 0x34d7fff5
+ (void)readClientDataFromShape:(xmlNode *)shape toGraphic:(id)graphic state:(id)state;	// 0x34d1caf5
+ (void)readFromDrawable:(xmlNode *)drawable toContent:(id)content;	// 0x34d1cf95
+ (void)readTextWrappingFromParent:(xmlNode *)parent toAnchor:(id)anchor;	// 0x34d1d775
+ (int)relativeHorizontalPosition:(id)position;	// 0x34d1d441
+ (int)relativeVerticalPosition:(id)position;	// 0x34d1d5e5
+ (int)verticalPosition:(id)position;	// 0x34d1d52d
+ (int)vmlSupportLevel;	// 0x34d1b435
+ (double)wrapDistanceBottom:(id)bottom;	// 0x34d1d739
+ (double)wrapDistanceLeft:(id)left;	// 0x34d1d6d1
+ (double)wrapDistanceRight:(id)right;	// 0x34d1d719
+ (double)wrapDistanceTop:(id)top;	// 0x34d1d6f1
+ (int)zIndex:(id)index;	// 0x34d1d761
@end

