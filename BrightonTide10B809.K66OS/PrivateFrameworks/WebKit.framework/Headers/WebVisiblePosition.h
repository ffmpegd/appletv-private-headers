/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface WebVisiblePosition : NSObject {
	WebObjectInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic) int affinity;	// G=0x3661ac15; S=0x3661ac61; 
+ (id)_wrapVisiblePosition:(VisiblePosition)position;	// 0x36613a0d
+ (id)_wrapVisiblePositionIfValid:(VisiblePosition)valid;	// 0x36613a99
- (VisiblePosition)_visiblePosition;	// 0x36613bc9
// declared property getter: - (int)affinity;	// 0x3661ac15
- (BOOL)atAlphaNumericBoundaryInDirection:(int)direction;	// 0x3661a015
- (BOOL)atBoundaryOfGranularity:(int)granularity inDirection:(int)direction;	// 0x36614da9
- (int)compare:(id)compare;	// 0x36613e89
- (void)dealloc;	// 0x36613c05
- (id)description;	// 0x36614385
- (BOOL)directionIsDownstream:(int)downstream;	// 0x36614581
- (int)distanceFromPosition:(id)position;	// 0x36614025
- (id)enclosingRangeWithCorrectionIndicator;	// 0x3661a701
- (id)enclosingRangeWithDictationPhraseAlternatives:(id *)dictationPhraseAlternatives;	// 0x3661a1dd
- (id)enclosingTextUnitOfGranularity:(int)granularity inDirectionIfAtBoundary:(int)boundary;	// 0x36618249
- (BOOL)isEditable;	// 0x36619d35
- (BOOL)isEqual:(id)equal;	// 0x36613d09
- (id)nextCharacterBoundaryInDirection:(int)direction;	// 0x36615515
- (id)nextDocumentBoundaryInDirection:(int)direction;	// 0x366174f5
- (id)nextLineBoundaryInDirection:(int)direction;	// 0x36616aa9
- (id)nextParagraphBoundaryInDirection:(int)direction;	// 0x36616f8d
- (id)nextSentenceBoundaryInDirection:(int)direction;	// 0x366164c5
- (id)nextWordBoundaryInDirection:(int)direction;	// 0x36615745
- (id)positionAtStartOrEndOfWord;	// 0x36619255
- (id)positionByMovingInDirection:(int)direction amount:(unsigned long)amount;	// 0x36614d85
- (id)positionByMovingInDirection:(int)direction amount:(unsigned long)amount withAffinityDownstream:(BOOL)affinityDownstream;	// 0x366145c5
- (id)positionOfNextBoundaryOfGranularity:(int)granularity inDirection:(int)direction;	// 0x36617729
- (BOOL)requiresContextForWordBoundary;	// 0x36619ecd
// declared property setter: - (void)setAffinity:(int)affinity;	// 0x3661ac61
- (int)textDirection;	// 0x3661457d
- (BOOL)withinTextUnitOfGranularity:(int)granularity inDirectionIfAtBoundary:(int)boundary;	// 0x36617789
@end

