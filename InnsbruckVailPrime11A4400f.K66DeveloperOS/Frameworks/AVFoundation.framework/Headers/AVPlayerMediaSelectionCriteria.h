/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVPlayerMediaSelectionCriteriaInternal, NSArray;

@interface AVPlayerMediaSelectionCriteria : NSObject {
	AVPlayerMediaSelectionCriteriaInternal *_criteria;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *preferredLanguages;	// G=0x2c323f31; 
@property(readonly, assign, nonatomic) NSArray *preferredMediaCharacteristics;	// G=0x2c323f51; 
- (id)init;	// 0x2c323a0d
- (id)initWithFigDictionary:(id)figDictionary;	// 0x2c3243b9
- (id)initWithPreferredLanguages:(id)preferredLanguages preferredMediaCharacteristics:(id)characteristics;	// 0x2c323ebd
- (id)initWithPreferredLanguages:(id)preferredLanguages preferredMediaCharacteristics:(id)characteristics preferredMediaSubTypes:(id)types precludedMediaSubTypes:(id)types4;	// 0x2c323ab5
- (void)dealloc;	// 0x2c323ee5
- (id)description;	// 0x2c323fb1
- (id)figDictionary;	// 0x2c3241f1
- (id)precludedMediaSubTypes;	// 0x2c323f91
// declared property getter: - (id)preferredLanguages;	// 0x2c323f31
// declared property getter: - (id)preferredMediaCharacteristics;	// 0x2c323f51
- (id)preferredMediaSubTypes;	// 0x2c323f71
@end

