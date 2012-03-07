/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"

@class NSSet, NSMutableDictionary, MCPlugHaven, NSString;

@interface MCContainerNavigator : MCContainer {
	NSMutableDictionary *mPlugs;	// 28 = 0x1c
	NSString *mStartPlugID;	// 32 = 0x20
	MCPlugHaven *mStartPlug;	// 36 = 0x24
}
@property(readonly, assign) unsigned countOfPlugs;	// G=0x31ba065d; 
@property(readonly, assign) NSSet *plugs;	// G=0x31ba0519; 
@property(readonly, assign) MCPlugHaven *startPlug;	// G=0x31ba0e21; @synthesize=mStartPlug
@property(copy, nonatomic) NSString *startPlugID;	// G=0x31ba0e11; S=0x31ba0cad; @synthesize=mStartPlugID
- (id)init;	// 0x31b9ffbd
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31ba0021
// declared property getter: - (unsigned)countOfPlugs;	// 0x31ba065d
- (void)demolish;	// 0x31ba01c9
- (id)imprint;	// 0x31ba03c9
- (id)plugForID:(id)anId;	// 0x31ba0719
// declared property getter: - (id)plugs;	// 0x31ba0519
- (void)removePlug:(id)plug;	// 0x31ba0a69
- (void)removePlugForID:(id)anId;	// 0x31ba0c79
- (id)setPlugForContainer:(id)container forID:(id)anId;	// 0x31ba0809
// declared property setter: - (void)setStartPlugID:(id)anId;	// 0x31ba0cad
// declared property getter: - (id)startPlug;	// 0x31ba0e21
// declared property getter: - (id)startPlugID;	// 0x31ba0e11
@end

