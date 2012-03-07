/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCPlug.h"

@class MCContainerNavigator, MCAction, NSString;

@interface MCPlugHaven : MCPlug {
	NSString *mIDInSupercontainer;	// 60 = 0x3c
	MCContainerNavigator *mSupercontainer;	// 64 = 0x40
}
@property(retain, nonatomic) MCAction *actionOnCompletion;	// G=0x31baaf39; S=0x31baaf59; 
@property(copy, getter=idInSupercontainer, setter=setIDInSupercontainer:) NSString *idInSupercontainer;	// G=0x31baafd1; S=0x31baafe5; @synthesize=mIDInSupercontainer
@property(assign) MCContainerNavigator *supercontainer;	// G=0x31bab009; S=0x31bab019; @synthesize=mSupercontainer
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x31baae0d
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x31baaf79
// declared property getter: - (id)actionOnCompletion;	// 0x31baaf39
- (void)demolish;	// 0x31baae7d
// declared property getter: - (id)idInSupercontainer;	// 0x31baafd1
- (id)imprint;	// 0x31baaedd
// declared property setter: - (void)setActionOnCompletion:(id)completion;	// 0x31baaf59
// declared property setter: - (void)setIDInSupercontainer:(id)supercontainer;	// 0x31baafe5
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x31bab019
// declared property getter: - (id)supercontainer;	// 0x31bab009
@end

