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
	int _type;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *indicatorName;	// G=0x32e049cd; @dynamic
@property(readonly, assign, nonatomic) int leftOrder;	// G=0x32c95cb1; @dynamic
@property(readonly, assign, nonatomic) int priority;	// G=0x32cd2c11; @dynamic
@property(readonly, assign, nonatomic) int rightOrder;	// G=0x32c95cf1; @dynamic
@property(readonly, assign, nonatomic) int type;	// G=0x32cd29e5; @synthesize=_type
@property(readonly, assign, nonatomic) Class viewClass;	// G=0x32ce6421; @dynamic
+ (BOOL)itemType:(int)type appearsInRegion:(int)region;	// 0x32fadf65
+ (BOOL)itemType:(int)type canBeEnabledForData:(id)data style:(int)style;	// 0x32c954dd
+ (id)itemWithType:(int)type;	// 0x32c95bb5
+ (BOOL)typeIsValid:(int)valid;	// 0x32c95c1d
- (id)initWithType:(int)type;	// 0x32ce6249
- (BOOL)appearsInRegion:(int)region;	// 0x32c95c29
- (BOOL)appearsOnLeft;	// 0x32c95c95
- (BOOL)appearsOnRight;	// 0x32c95cd5
- (int)compareLeftOrder:(id)order;	// 0x32c96d4d
- (int)comparePriority:(id)priority;	// 0x32cd2bd9
- (int)compareRightOrder:(id)order;	// 0x32cd1329
- (id)description;	// 0x32fadfa5
// declared property getter: - (id)indicatorName;	// 0x32e049cd
// declared property getter: - (int)leftOrder;	// 0x32c95cb1
// declared property getter: - (int)priority;	// 0x32cd2c11
// declared property getter: - (int)rightOrder;	// 0x32c95cf1
// declared property getter: - (int)type;	// 0x32cd29e5
// declared property getter: - (Class)viewClass;	// 0x32ce6421
@end

