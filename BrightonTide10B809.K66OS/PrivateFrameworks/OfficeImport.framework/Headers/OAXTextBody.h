/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXTextBody : NSObject {
}
+ (int)readAnchorType:(id)type;	// 0x3493aa61
+ (int)readFlowType:(id)type;	// 0x3493ab39
+ (void)readFlowType:(id)type textBodyProperties:(id)properties;	// 0x3493ab05
+ (int)readHorizontalOverflowType:(id)type;	// 0x349c0739
+ (void)readHorizontalOverflowType:(id)type textBodyProperties:(id)properties;	// 0x34a592dd
+ (void)readTextBodyFromXmlNode:(xmlNode *)xmlNode textBody:(id)body drawingState:(id)state;	// 0x3493a2d1
+ (void)readTextBodyProperties:(xmlNode *)properties textBodyProperties:(id)properties2 drawingState:(id)state;	// 0x3493a439
+ (void)readVerticalOverflowType:(id)type textBodyProperties:(id)properties;	// 0x349bf43d
+ (void)readWrapType:(id)type textBodyProperties:(id)properties;	// 0x34944565
@end
