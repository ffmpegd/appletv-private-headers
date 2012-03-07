/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, UIView;
@protocol UITextSelectingContainer;

@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
- (id)debugDescription;
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (UINibLoadingActionEstablishing)
- (void)_connectInterfaceBuilderEventConnection:(id)connection;	// 0x32eeb11d
@end

@interface NSObject (UINibLoadingAdditions)
- (void)awakeFromNib;	// 0x32eebbd5
@end

@interface NSObject (UIAccessibility)
@property(assign, nonatomic) CGPoint accessibilityActivationPoint;	// G=0x32d543c9; S=0x32f01499; @dynamic
@property(retain) id accessibilityContainer;	// G=0x32d5374d; S=0x32d51abd; converted property
@property(assign, nonatomic) BOOL accessibilityElementsHidden;	// G=0x32f01461; S=0x32d5b255; @dynamic
@property(assign, nonatomic) CGRect accessibilityFrame;	// G=0x32f013e9; S=0x32d5709d; @dynamic
@property(copy, nonatomic) NSString *accessibilityHint;	// G=0x32d51b39; S=0x32d51b09; @dynamic
@property(retain) id accessibilityIdentifier;	// G=0x32d52b69; S=0x32d51b19; converted property
@property(copy, nonatomic) NSString *accessibilityLabel;	// G=0x32d51a89; S=0x32d55079; @dynamic
@property(retain, nonatomic) NSString *accessibilityLanguage;	// G=0x32d83cc9; S=0x32e1bdf1; @dynamic
@property(assign, nonatomic) unsigned long long accessibilityTraits;	// G=0x32d5385d; S=0x32d57061; @dynamic
@property(copy, nonatomic) NSString *accessibilityValue;	// G=0x32d51b49; S=0x32d57051; @dynamic
@property(assign, nonatomic) BOOL accessibilityViewIsModal;	// G=0x32f01439; S=0x32db46d1; @dynamic
@property(assign, nonatomic) BOOL isAccessibilityElement;	// G=0x32d53839; S=0x32d56f5d; @dynamic
// declared property getter: - (CGPoint)accessibilityActivationPoint;	// 0x32d543c9
// converted property getter: - (id)accessibilityContainer;	// 0x32d5374d
// declared property getter: - (BOOL)accessibilityElementsHidden;	// 0x32f01461
// declared property getter: - (CGRect)accessibilityFrame;	// 0x32f013e9
// declared property getter: - (id)accessibilityHint;	// 0x32d51b39
// converted property getter: - (id)accessibilityIdentifier;	// 0x32d52b69
// declared property getter: - (id)accessibilityLabel;	// 0x32d51a89
// declared property getter: - (id)accessibilityLanguage;	// 0x32d83cc9
// declared property getter: - (unsigned long long)accessibilityTraits;	// 0x32d5385d
// declared property getter: - (id)accessibilityValue;	// 0x32d51b49
// declared property getter: - (BOOL)accessibilityViewIsModal;	// 0x32f01439
// declared property getter: - (BOOL)isAccessibilityElement;	// 0x32d53839
// declared property setter: - (void)setAccessibilityActivationPoint:(CGPoint)point;	// 0x32f01499
// converted property setter: - (void)setAccessibilityContainer:(id)container;	// 0x32d51abd
// declared property setter: - (void)setAccessibilityElementsHidden:(BOOL)hidden;	// 0x32d5b255
// declared property setter: - (void)setAccessibilityFrame:(CGRect)frame;	// 0x32d5709d
// declared property setter: - (void)setAccessibilityHint:(id)hint;	// 0x32d51b09
// converted property setter: - (void)setAccessibilityIdentifier:(id)identifier;	// 0x32d51b19
// declared property setter: - (void)setAccessibilityLabel:(id)label;	// 0x32d55079
// declared property setter: - (void)setAccessibilityLanguage:(id)language;	// 0x32e1bdf1
// declared property setter: - (void)setAccessibilityTraits:(unsigned long long)traits;	// 0x32d57061
// declared property setter: - (void)setAccessibilityValue:(id)value;	// 0x32d57051
// declared property setter: - (void)setAccessibilityViewIsModal:(BOOL)modal;	// 0x32db46d1
// declared property setter: - (void)setIsAccessibilityElement:(BOOL)element;	// 0x32d56f5d
- (id)storedAccessibilityActivationPoint;	// 0x32f01489
- (id)storedAccessibilityElementsHidden;	// 0x32d53885
- (id)storedAccessibilityFrame;	// 0x32d5373d
- (id)storedAccessibilityTraits;	// 0x32d51b59
- (id)storedAccessibilityViewIsModal;	// 0x32d542d5
- (id)storedIsAccessibilityElement;	// 0x32d51b69
@end

@interface NSObject (UIAccessibilityFocus)
- (void)accessibilityElementDidBecomeFocused;	// 0x32f014d5
- (void)accessibilityElementDidLoseFocus;	// 0x32f014d9
- (BOOL)accessibilityElementIsFocused;	// 0x32f014dd
@end

@interface NSObject (UIAccessibilityAction)
- (void)accessibilityDecrement;	// 0x32f014e5
- (void)accessibilityIncrement;	// 0x32f014e1
- (BOOL)accessibilityPerformEscape;	// 0x32f014ed
- (BOOL)accessibilityScroll:(int)scroll;	// 0x32f014e9
@end

@interface NSObject (UIAccessibilityContainer)
- (id)accessibilityElementAtIndex:(int)index;	// 0x32f014f5
- (int)accessibilityElementCount;	// 0x32f014f1
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x32f014f9
@end

@interface NSObject (UIAccessibilityPrivate)
- (void)_accessibilityFinalize;	// 0x32c9fddd
- (void)accessibilitySetIdentification:(id)identification;	// 0x32ccdc49
@end

@interface NSObject (UIKitAccessibilityInterfaceBuilderSupport)
- (unsigned long long)defaultAccessibilityTraits;	// 0x32f01501
- (BOOL)isAccessibilityElementByDefault;	// 0x32f01515
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32f01519
@end

@interface NSObject (UITextRangeViewScrollerSupport)
- (void)_disableScrollingIfNecessary;	// 0x32f416e9
- (void)_enableScrollingIfNecessary;	// 0x32f416e5
@end

@interface NSObject (UITextInput_Internal)
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *_textSelectingContainer;	// G=0x32f68965; 
- (unsigned long)_characterAfterCaretSelection;	// 0x32d938d1
- (unsigned long)_characterBeforeCaretSelection;	// 0x32d93615
- (unsigned long)_characterInRelationToCaretSelection:(int)caretSelection;	// 0x32d93629
- (unsigned long)_characterInRelationToRangedSelection:(int)rangedSelection;	// 0x32d9369d
- (id)_clampedpositionFromPosition:(id)position offset:(int)offset;	// 0x32db58ed
- (void)_deleteBackwardAndNotify:(BOOL)notify;	// 0x32f66b79
- (void)_deleteByWord;	// 0x32f667fd
- (void)_deleteForwardAndNotify:(BOOL)notify;	// 0x32f66ba1
- (void)_deleteToEndOfLine;	// 0x32f66a11
- (void)_deleteToStartOfLine;	// 0x32f668a9
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;	// 0x32f665f9
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)wordsBeforeCaretSelection;	// 0x32f6660d
- (void)_extendCurrentSelection:(int)selection;	// 0x32f66455
- (id)_findPleasingWordBoundaryFromPosition:(id)position;	// 0x32d796b1
- (id)_fontForCaretSelection;	// 0x32e18491
- (id)_fullRange;	// 0x32f66efd
- (id)_fullText;	// 0x32f66191
- (BOOL)_hasMarkedTextOrRangedSelection;	// 0x32f663ed
- (int)_indexForTextPosition:(id)textPosition;	// 0x32e1b139
- (BOOL)_isEmptySelection;	// 0x32f66379
- (id)_keyInput;	// 0x32f6608d
- (CGRect)_lastRectForRange:(id)range;	// 0x32f66d79
- (void)_moveCurrentSelection:(int)selection;	// 0x32f6651d
- (id)_moveDown:(BOOL)down withHistory:(id)history;	// 0x32f68389
- (id)_moveLeft:(BOOL)left withHistory:(id)history;	// 0x32f685e5
- (id)_moveRight:(BOOL)right withHistory:(id)history;	// 0x32f686d9
- (id)_moveToEndOfDocument:(BOOL)document withHistory:(id)history;	// 0x32f6801d
- (id)_moveToEndOfLine:(BOOL)line withHistory:(id)history;	// 0x32f679bd
- (id)_moveToEndOfParagraph:(BOOL)paragraph withHistory:(id)history;	// 0x32f67d59
- (id)_moveToEndOfWord:(BOOL)word withHistory:(id)history;	// 0x32f676dd
- (id)_moveToStartOfDocument:(BOOL)document withHistory:(id)history;	// 0x32f67f69
- (id)_moveToStartOfLine:(BOOL)line withHistory:(id)history;	// 0x32f67841
- (id)_moveToStartOfParagraph:(BOOL)paragraph withHistory:(id)history;	// 0x32f67b41
- (id)_moveToStartOfWord:(BOOL)word withHistory:(id)history;	// 0x32f67461
- (id)_moveUp:(BOOL)up withHistory:(id)history;	// 0x32f6812d
- (id)_newPhraseBoundaryGestureRecognizer;	// 0x32f68cad
- (NSRange)_nsrangeForTextRange:(id)textRange;	// 0x32e1b0a9
- (void)_phraseBoundaryGesture:(id)gesture;	// 0x32f68db1
- (id)_positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset withAffinityDownstream:(BOOL)affinityDownstream;	// 0x32f687d1
- (id)_rangeOfEnclosingWord:(id)enclosingWord;	// 0x32d62709
- (id)_rangeOfLineEnclosingPosition:(id)lineEnclosingPosition;	// 0x32f66e75
- (id)_rangeOfParagraphEnclosingPosition:(id)paragraphEnclosingPosition;	// 0x32f66eb9
- (CGRect)_rectContainingCaretSelection;	// 0x32e1b1d9
- (void)_replaceCurrentWordWithText:(id)text;	// 0x32f66d09
- (void)_scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x32f66e71
- (id)_selectableText;	// 0x32d62775
- (int)_selectionAffinity;	// 0x32f68871
- (NSRange)_selectionAsNSRange;	// 0x32f66091
- (BOOL)_selectionAtDocumentEnd;	// 0x32f66309
- (BOOL)_selectionAtDocumentStart;	// 0x32f66299
- (BOOL)_selectionAtWordStart;	// 0x32f661fd
- (void)_setCaretSelectionAtEndOfSelection;	// 0x32f6677d
- (void)_setGestureRecognizers;	// 0x32f68969
- (id)_setHistory:(id)history withExtending:(BOOL)extending withAnchor:(int)anchor withAffinityDownstream:(BOOL)affinityDownstream;	// 0x32f6728d
- (void)_setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x32f68b85
- (void)_setSelectedTextRange:(id)range withAffinityDownstream:(BOOL)affinityDownstream;	// 0x32f68801
- (id)_setSelectionRangeWithHistory:(id)history;	// 0x32f6703d
- (id)_textColorForCaretSelection;	// 0x32f66f55
// declared property getter: - (id)_textSelectingContainer;	// 0x32f68965
- (void)_unmarkText;	// 0x32dd89f5
- (void)_updateSelectionWithTextRange:(id)textRange withAffinityDownstream:(BOOL)affinityDownstream;	// 0x32f6700d
- (id)_wordContainingCaretSelection;	// 0x32f660f1
- (int)selectionAffinity;	// 0x32f69321
@end

@interface NSObject (UIAppearanceAdditions)
+ (void)_installAppearanceSwizzleForSetter:(id)setter;	// 0x32fe5fad
@end

