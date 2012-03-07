/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardCandidateList.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "UIKeyboardCandidateListDelegate.h"

@class NSArray, NSString, UIKeyboardCandidateExtended, UIView;

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
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x353279c5; S=0x353279d5; @synthesize=_candidateListDelegate
@property(copy, nonatomic) NSArray *candidates;	// G=0x353279e5; S=0x353279f5; @synthesize=_candidates
@property(retain, nonatomic) UIKeyboardCandidateExtended *extendedCandidatesView;	// G=0x353278f5; S=0x35327aad; @synthesize=_extendedCandidatesView
@property(assign, nonatomic) CGRect inlineRect;	// G=0x35327a6d; S=0x35327a91; @synthesize=_inlineRect
@property(copy, nonatomic) NSString *inlineText;	// G=0x35327a19; S=0x35327a29; @synthesize=_inlineText
@property(readonly, assign, nonatomic) UIView<UIKeyboardCandidateList> *inlineView;	// @dynamic
@property(assign, nonatomic) int promptTextType;	// G=0x35327a4d; S=0x35327a5d; @synthesize=_promptTextType
@property(assign, nonatomic) BOOL showingExtendedCandidatesView;	// G=0x35327ad1; S=0x35327ae1; @synthesize=_showingExtendedCandidatesView
+ (void)releaseSharedInstance;	// 0x35326ab9
+ (id)sharedInstance;	// 0x35326a19
- (id)_inlineView;	// 0x35327af1
- (void)animateInlineCandidate;	// 0x35326de1
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x35327399
- (id)candidateAtIndex:(unsigned)index;	// 0x3532731d
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x35327659
// declared property getter: - (id)candidateListDelegate;	// 0x353279c5
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x35327861
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x353278ad
// declared property getter: - (id)candidates;	// 0x353279e5
- (void)configureKeyboard:(id)keyboard;	// 0x35327491
- (unsigned)count;	// 0x35327431
- (id)currentCandidate;	// 0x35327211
- (unsigned)currentIndex;	// 0x353272bd
- (void)dealloc;	// 0x35326991
// declared property getter: - (id)extendedCandidatesView;	// 0x353278f5
- (void)hideExtendedCandidatesView;	// 0x35326d05
// declared property getter: - (CGRect)inlineRect;	// 0x35327a6d
// declared property getter: - (id)inlineText;	// 0x35327a19
- (void)layout;	// 0x35326e2d
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x35326de5
// declared property getter: - (int)promptTextType;	// 0x35327a4d
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x353279d5
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x353279f5
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x35326de9
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x353275a1
- (void)setCompletionContext:(id)context;	// 0x35327649
// declared property setter: - (void)setExtendedCandidatesView:(id)view;	// 0x35327aad
// declared property setter: - (void)setInlineRect:(CGRect)rect;	// 0x35327a91
// declared property setter: - (void)setInlineText:(id)text;	// 0x35327a29
// declared property setter: - (void)setPromptTextType:(int)type;	// 0x35327a5d
// declared property setter: - (void)setShowingExtendedCandidatesView:(BOOL)view;	// 0x35327ae1
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x35326e6d
- (void)showCandidateAtIndex:(unsigned)index;	// 0x35326ef1
- (void)showExtendedCandidatesView;	// 0x35326ae1
- (void)showNextCandidate;	// 0x35326fbd
- (void)showNextPage;	// 0x35327151
- (void)showPageAtIndex:(unsigned)index;	// 0x353270ed
- (void)showPreviousCandidate;	// 0x35327055
- (void)showPreviousPage;	// 0x353271b1
// declared property getter: - (BOOL)showingExtendedCandidatesView;	// 0x35327ad1
@end

