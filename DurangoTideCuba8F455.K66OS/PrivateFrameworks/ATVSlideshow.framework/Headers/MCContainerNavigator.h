/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"

@class NSSet, NSString, NSMutableDictionary, MCPlugHaven;

@interface MCContainerNavigator : MCContainer {
	NSMutableDictionary *mPlugs;	// 28 = 0x1c
	NSString *mStartPlugID;	// 32 = 0x20
	MCPlugHaven *mStartPlug;	// 36 = 0x24
}
@property(readonly, assign) unsigned countOfPlugs;	// G=0x33db5e11; 
@property(readonly, assign) NSSet *plugs;	// G=0x33db5cad; 
@property(readonly, assign) MCPlugHaven *startPlug;	// G=0x33db66d5; @synthesize=mStartPlug
@property(copy, nonatomic) NSString *startPlugID;	// G=0x33db66c5; S=0x33db652d; @synthesize=mStartPlugID
- (id)init;	// 0x33db56ad
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x33db5719
// declared property getter: - (unsigned)countOfPlugs;	// 0x33db5e11
- (void)demolish;	// 0x33db58c1
- (id)imprint;	// 0x33db5b0d
- (id)plugForID:(id)anId;	// 0x33db5ef1
// declared property getter: - (id)plugs;	// 0x33db5cad
- (void)removePlug:(id)plug;	// 0x33db62a5
- (void)removePlugForID:(id)anId;	// 0x33db64fd
- (id)setPlugForContainer:(id)container forID:(id)anId;	// 0x33db6009
// declared property setter: - (void)setStartPlugID:(id)anId;	// 0x33db652d
// declared property getter: - (id)startPlug;	// 0x33db66d5
// declared property getter: - (id)startPlugID;	// 0x33db66c5
@end

