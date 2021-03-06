/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface AFSpeechToken : NSObject {
	NSString *_text;	// 4 = 0x4
	int _confidence;	// 8 = 0x8
	double _startTime;	// 12 = 0xc
	double _endTime;	// 20 = 0x14
	BOOL _removeSpaceBefore;	// 28 = 0x1c
	BOOL _removeSpaceAfter;	// 29 = 0x1d
}
@property(assign) int confidenceScore;	// G=0x336a27ed; S=0x336a2801; @synthesize=_confidence
@property(assign) double endTime;	// G=0x336a2881; S=0x336a28b5; @synthesize=_endTime
@property(assign) BOOL removeSpaceAfter;	// G=0x336a2919; S=0x336a2931; @synthesize=_removeSpaceAfter
@property(assign) BOOL removeSpaceBefore;	// G=0x336a28e9; S=0x336a2901; @synthesize=_removeSpaceBefore
@property(assign) double startTime;	// G=0x336a2819; S=0x336a284d; @synthesize=_startTime
@property(copy, nonatomic) NSString *text;	// G=0x336a27c9; S=0x336a27dd; @synthesize=_text
- (id)initWithDKPlistRepresentation:(id)dkplistRepresentation;	// 0x336a2605
- (void).cxx_destruct;	// 0x336a2949
// declared property getter: - (int)confidenceScore;	// 0x336a27ed
- (id)description;	// 0x336a232d
- (id)dkPlistRepresentation;	// 0x336a2429
// declared property getter: - (double)endTime;	// 0x336a2881
// declared property getter: - (BOOL)removeSpaceAfter;	// 0x336a2919
// declared property getter: - (BOOL)removeSpaceBefore;	// 0x336a28e9
// declared property setter: - (void)setConfidenceScore:(int)score;	// 0x336a2801
// declared property setter: - (void)setEndTime:(double)time;	// 0x336a28b5
// declared property setter: - (void)setRemoveSpaceAfter:(BOOL)after;	// 0x336a2931
// declared property setter: - (void)setRemoveSpaceBefore:(BOOL)before;	// 0x336a2901
// declared property setter: - (void)setStartTime:(double)time;	// 0x336a284d
// declared property setter: - (void)setText:(id)text;	// 0x336a27dd
// declared property getter: - (double)startTime;	// 0x336a2819
// declared property getter: - (id)text;	// 0x336a27c9
@end

