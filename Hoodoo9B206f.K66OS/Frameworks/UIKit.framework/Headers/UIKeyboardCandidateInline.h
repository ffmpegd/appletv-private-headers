/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKeyboardCandidateList.h"
#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"

@class NSString, NSArray, UIKeyboardCandidateExtended, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInline : NSObject <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate> {
@private
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 4 = 0x4
	NSArray *_candidates;	// 8 = 0x8
	NSString *_inlineText;	// 12 = 0xc
	int _promptTextType;	// 16 = 0x10
	CGRect _inlineRect;	// 20 = 0x14
	UIKeyboardCandidateExtended *_extendedCandidatesView;	// 36 = 0x24
	BOOL _showingExtendedCandidatesView;	// 40 = 0x28
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x3557c5c9; S=0x3557c5d9; @synthesize=_candidateListDelegate
@property(copy, nonatomic) NSArray *candidates;	// G=0x3557c5e9; S=0x3557c5f9; @synthesize=_candidates
@property(retain, nonatomic) UIKeyboardCandidateExtended *extendedCandidatesView;	// G=0x3557c4f9; S=0x3557c6b1; @synthesize=_extendedCandidatesView
@property(assign, nonatomic) CGRect inlineRect;	// G=0x3557c671; S=0x3557c695; @synthesize=_inlineRect
@property(copy, nonatomic) NSString *inlineText;	// G=0x3557c61d; S=0x3557c62d; @synthesize=_inlineText
@property(readonly, assign, nonatomic) UIView<UIKeyboardCandidateList> *inlineView;	// @dynamic
@property(assign, nonatomic) int promptTextType;	// G=0x3557c651; S=0x3557c661; @synthesize=_promptTextType
@property(assign, nonatomic) BOOL showingExtendedCandidatesView;	// G=0x3557c6d5; S=0x3557c6e5; @synthesize=_showingExtendedCandidatesView
+ (void)releaseSharedInstance;	// 0x3557b6bd
+ (id)sharedInstance;	// 0x3557b61d
- (id)_inlineView;	// 0x3557c6f5
- (void)animateInlineCandidate;	// 0x3557b9e5
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x3557bf9d
- (id)candidateAtIndex:(unsigned)index;	// 0x3557bf21
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x3557c25d
// declared property getter: - (id)candidateListDelegate;	// 0x3557c5c9
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x3557c465
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x3557c4b1
// declared property getter: - (id)candidates;	// 0x3557c5e9
- (void)configureKeyboard:(id)keyboard;	// 0x3557c095
- (unsigned)count;	// 0x3557c035
- (id)currentCandidate;	// 0x3557be15
- (unsigned)currentIndex;	// 0x3557bec1
- (void)dealloc;	// 0x3557b595
// declared property getter: - (id)extendedCandidatesView;	// 0x3557c4f9
- (void)hideExtendedCandidatesView;	// 0x3557b909
// declared property getter: - (CGRect)inlineRect;	// 0x3557c671
// declared property getter: - (id)inlineText;	// 0x3557c61d
- (void)layout;	// 0x3557ba31
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x3557b9e9
// declared property getter: - (int)promptTextType;	// 0x3557c651
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x3557c5d9
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x3557c5f9
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x3557b9ed
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x3557c1a5
- (void)setCompletionContext:(id)context;	// 0x3557c24d
// declared property setter: - (void)setExtendedCandidatesView:(id)view;	// 0x3557c6b1
// declared property setter: - (void)setInlineRect:(CGRect)rect;	// 0x3557c695
// declared property setter: - (void)setInlineText:(id)text;	// 0x3557c62d
// declared property setter: - (void)setPromptTextType:(int)type;	// 0x3557c661
// declared property setter: - (void)setShowingExtendedCandidatesView:(BOOL)view;	// 0x3557c6e5
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x3557ba71
- (void)showCandidateAtIndex:(unsigned)index;	// 0x3557baf5
- (void)showExtendedCandidatesView;	// 0x3557b6e5
- (void)showNextCandidate;	// 0x3557bbc1
- (void)showNextPage;	// 0x3557bd55
- (void)showPageAtIndex:(unsigned)index;	// 0x3557bcf1
- (void)showPreviousCandidate;	// 0x3557bc59
- (void)showPreviousPage;	// 0x3557bdb5
// declared property getter: - (BOOL)showingExtendedCandidatesView;	// 0x3557c6d5
@end

