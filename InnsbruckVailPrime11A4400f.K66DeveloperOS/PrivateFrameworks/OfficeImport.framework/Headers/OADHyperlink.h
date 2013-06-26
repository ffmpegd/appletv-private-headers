/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class NSURL, NSString;

@interface OADHyperlink : NSObject {
	NSURL *mTargetLocation;	// 4 = 0x4
	int mTargetMode;	// 8 = 0x8
	NSString *mTargetFrame;	// 12 = 0xc
	NSString *mAction;	// 16 = 0x10
	NSString *mTooltip;	// 20 = 0x14
	NSString *mInvalidUrl;	// 24 = 0x18
	BOOL mDoEndSound;	// 28 = 0x1c
	BOOL mIsVisited;	// 29 = 0x1d
	BOOL mDoAddToHistory;	// 30 = 0x1e
}
@property(retain) id action;	// G=0x3184536d; S=0x317e0061; converted property
@property(assign, nonatomic) BOOL doAddToHistory;	// G=0x318f0595; S=0x317e013d; @synthesize=mDoAddToHistory
@property(assign, nonatomic) BOOL doEndSound;	// G=0x318f0575; S=0x317e011d; @synthesize=mDoEndSound
@property(retain) id invalidUrl;	// G=0x318f04f1; S=0x317e00e1; converted property
@property(assign, nonatomic) BOOL isVisited;	// G=0x318f0585; S=0x317e012d; @synthesize=mIsVisited
@property(retain) id targetFrame;	// G=0x318f04d1; S=0x317e0025; converted property
@property(retain) id targetLocation;	// G=0x318a1875; S=0x317dffd5; converted property
@property(assign) int targetMode;	// G=0x318f04c1; S=0x317e0015; converted property
@property(retain) id tooltip;	// G=0x318f04e1; S=0x317e00a1; converted property
- (id)init;	// 0x317dff69
// converted property getter: - (id)action;	// 0x3184536d
- (void)dealloc;	// 0x317e0445
// declared property getter: - (BOOL)doAddToHistory;	// 0x318f0595
// declared property getter: - (BOOL)doEndSound;	// 0x318f0575
- (unsigned)hash;	// 0x318f0501
// converted property getter: - (id)invalidUrl;	// 0x318f04f1
- (BOOL)isEqual:(id)equal;	// 0x3185e48d
// declared property getter: - (BOOL)isVisited;	// 0x318f0585
// converted property setter: - (void)setAction:(id)action;	// 0x317e0061
// declared property setter: - (void)setDoAddToHistory:(BOOL)history;	// 0x317e013d
// declared property setter: - (void)setDoEndSound:(BOOL)sound;	// 0x317e011d
// converted property setter: - (void)setInvalidUrl:(id)url;	// 0x317e00e1
// declared property setter: - (void)setIsVisited:(BOOL)visited;	// 0x317e012d
// converted property setter: - (void)setTargetFrame:(id)frame;	// 0x317e0025
// converted property setter: - (void)setTargetLocation:(id)location;	// 0x317dffd5
// converted property setter: - (void)setTargetMode:(int)mode;	// 0x317e0015
// converted property setter: - (void)setTooltip:(id)tooltip;	// 0x317e00a1
// converted property getter: - (id)targetFrame;	// 0x318f04d1
// converted property getter: - (id)targetLocation;	// 0x318a1875
// converted property getter: - (int)targetMode;	// 0x318f04c1
// converted property getter: - (id)tooltip;	// 0x318f04e1
@end
