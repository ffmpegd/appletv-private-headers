/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface AFSpeechPhrase : NSObject {
	NSArray *_interpretations;	// 4 = 0x4
	BOOL _isLowConfidence;	// 8 = 0x8
}
@property(copy, nonatomic) NSArray *interpretations;	// G=0x336a2161; S=0x336a2175; @synthesize=_interpretations
@property(assign) BOOL isLowConfidence;	// G=0x336a2185; S=0x336a219d; @synthesize=_isLowConfidence
- (id)initWithDKPlistRepresentation:(id)dkplistRepresentation;	// 0x336a205d
- (void).cxx_destruct;	// 0x336a21b5
- (id)dkPlistRepresentation;	// 0x336a1f91
// declared property getter: - (id)interpretations;	// 0x336a2161
// declared property getter: - (BOOL)isLowConfidence;	// 0x336a2185
// declared property setter: - (void)setInterpretations:(id)interpretations;	// 0x336a2175
// declared property setter: - (void)setIsLowConfidence:(BOOL)confidence;	// 0x336a219d
@end

