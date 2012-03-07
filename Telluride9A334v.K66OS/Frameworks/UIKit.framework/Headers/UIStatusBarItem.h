/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UIStatusBarItem : NSObject {
@private
	int _type;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *indicatorName;	// G=0x3019710d; @dynamic
@property(readonly, assign, nonatomic) int leftOrder;	// G=0x3003dfcd; @dynamic
@property(readonly, assign, nonatomic) int priority;	// G=0x3005032d; @dynamic
@property(readonly, assign, nonatomic) int rightOrder;	// G=0x3003e011; @dynamic
@property(readonly, assign, nonatomic) int type;	// G=0x3004efa5; @synthesize=_type
@property(readonly, assign, nonatomic) Class viewClass;	// G=0x3004f031; @dynamic
+ (BOOL)itemType:(int)type canBeEnabledForData:(id)data style:(int)style;	// 0x3003d8d1
+ (id)itemWithType:(int)type;	// 0x3003dec9
+ (BOOL)typeIsValid:(int)valid;	// 0x3003df35
- (id)initWithType:(int)type;	// 0x3004ee45
- (BOOL)appearsInRegion:(int)region;	// 0x3003df41
- (BOOL)appearsOnLeft;	// 0x3003dfad
- (BOOL)appearsOnRight;	// 0x3003dff1
- (int)compareLeftOrder:(id)order;	// 0x3003fcb9
- (int)comparePriority:(id)priority;	// 0x300502f5
- (int)compareRightOrder:(id)order;	// 0x30174ae5
- (id)description;	// 0x30333b4d
// declared property getter: - (id)indicatorName;	// 0x3019710d
// declared property getter: - (int)leftOrder;	// 0x3003dfcd
// declared property getter: - (int)priority;	// 0x3005032d
// declared property getter: - (int)rightOrder;	// 0x3003e011
// declared property getter: - (int)type;	// 0x3004efa5
// declared property getter: - (Class)viewClass;	// 0x3004f031
@end

