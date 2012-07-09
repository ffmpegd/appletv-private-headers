/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


@interface WebAccessibilityObjectWrapper : NSObject {
	AccessibilityObject *m_object;	// 4 = 0x4
	int m_isAccessibilityElement;	// 8 = 0x8
	unsigned long long m_accessibilityTraitsFromAncestor;	// 12 = 0xc
}
- (id)initWithAccessibilityObject:(AccessibilityObject *)accessibilityObject;	// 0x357137dd
- (void)_accessibilityActivate;	// 0x357169d5
- (BOOL)_accessibilityIsLandmarkRole:(int)role;	// 0x357142b1
- (WebAccessibilityObjectWrapper *)_accessibilityLandmarkAncestor;	// 0x35714305
- (WebAccessibilityObjectWrapper *)_accessibilityListAncestor;	// 0x357142c1
- (id)_accessibilityNextElementsWithCount:(unsigned long)count;	// 0x357165f5
- (id)_accessibilityParentForSubview:(id)subview;	// 0x35716a51
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)count;	// 0x35716641
- (WebAccessibilityObjectWrapper *)_accessibilityTableAncestor;	// 0x35714361
- (unsigned long long)_accessibilityTraitsFromAncestors;	// 0x357143a1
- (id)_accessibilityWebDocumentView;	// 0x35716535
- (BOOL)_addAccessibilityObject:(AccessibilityObject *)object toTextMarkerArray:(id)textMarkerArray;	// 0x35716fc1
- (unsigned long long)_axAdjustableTrait;	// 0x357139b1
- (unsigned long long)_axButtonTrait;	// 0x35713991
- (unsigned long long)_axContainedByLandmarkTrait;	// 0x35713951
- (unsigned long long)_axContainedByListTrait;	// 0x35713941
- (unsigned long long)_axContainedByTableTrait;	// 0x35713949
- (unsigned long long)_axHasTextCursorTrait;	// 0x35713971
- (unsigned long long)_axHeaderTrait;	// 0x35713939
- (unsigned long long)_axImageTrait;	// 0x35713981
- (unsigned long long)_axLinkTrait;	// 0x35713929
- (unsigned long long)_axMenuItemTrait;	// 0x357139b9
- (unsigned long long)_axNotEnabledTrait;	// 0x357139c9
- (unsigned long long)_axPopupButtonTrait;	// 0x357139a1
- (unsigned long long)_axRadioButtonTrait;	// 0x357139d1
- (unsigned long long)_axSecureTextFieldTrait;	// 0x35713961
- (unsigned long long)_axSelectedTrait;	// 0x357139c1
- (unsigned long long)_axStaticTextTrait;	// 0x357139a9
- (unsigned long long)_axTabButtonTrait;	// 0x35713989
- (unsigned long long)_axTextEntryTrait;	// 0x35713969
- (unsigned long long)_axTextOperationsAvailableTrait;	// 0x35713979
- (unsigned long long)_axToggleTrait;	// 0x35713999
- (unsigned long long)_axVisitedTrait;	// 0x35713931
- (unsigned long long)_axWebContentTrait;	// 0x35713959
- (CGRect)_convertIntRectToScreenCoordinates:(IntRect)screenCoordinates;	// 0x35715fad
- (PassRefPtr<WebCore::Range>)_convertToDOMRange:(NSRange)domrange;	// 0x357188dd
- (NSRange)_convertToNSRange:(Range *)nsrange;	// 0x3571852d
- (BOOL)_prepareAccessibilityCall;	// 0x357138bd
- (id)_stringForRange:(NSRange)range attributed:(BOOL)attributed;	// 0x357194b9
- (BOOL)accessibilityARIAIsBusy;	// 0x3571a7e5
- (BOOL)accessibilityARIALiveRegionIsAtomic;	// 0x3571a8d1
- (id)accessibilityARIALiveRegionStatus;	// 0x3571a821
- (id)accessibilityARIARelevantStatus;	// 0x3571a879
- (CGPoint)accessibilityActivationPoint;	// 0x35716199
- (BOOL)accessibilityCanFuzzyHitTest;	// 0x357139d9
- (NSRange)accessibilityColumnRange;	// 0x357156cd
- (id)accessibilityContainer;	// 0x35716461
- (void)accessibilityDecreaseSelection:(int)selection;	// 0x35716dd9
- (void)accessibilityDecrement;	// 0x35716f85
- (id)accessibilityElementAtIndex:(int)index;	// 0x35713d71
- (int)accessibilityElementCount;	// 0x35713cf9
- (void)accessibilityElementDidBecomeFocused;	// 0x35716aed
- (id)accessibilityElementForRow:(int)row andColumn:(int)column;	// 0x357154e9
- (CGRect)accessibilityElementRect;	// 0x35716105
- (id)accessibilityFlowToElements;	// 0x357166c9
- (id)accessibilityFocusedUIElement;	// 0x357164ed
- (CGRect)accessibilityFrame;	// 0x35716241
- (id)accessibilityHeaderElements;	// 0x35715205
- (id)accessibilityHint;	// 0x35715cad
- (id)accessibilityHitTest:(CGPoint)test;	// 0x35713aa1
- (id)accessibilityIdentifier;	// 0x3571a6f5
- (void)accessibilityIncreaseSelection:(int)selection;	// 0x35716dc5
- (void)accessibilityIncrement;	// 0x35716f49
- (id)accessibilityInvalidStatus;	// 0x3571a90d
- (BOOL)accessibilityIsComboBox;	// 0x35715c6d
- (id)accessibilityLabel;	// 0x35714db1
- (id)accessibilityLanguage;	// 0x35714131
- (id)accessibilityLinkedElement;	// 0x35716871
- (void)accessibilityModifySelection:(int)selection increase:(BOOL)increase;	// 0x35716b5d
- (void)accessibilityMoveSelectionToMarker:(id)marker;	// 0x35716ded
- (AccessibilityObject *)accessibilityObject;	// 0x35713919
- (WebAccessibilityObjectWrapper *)accessibilityObjectForTextMarker:(id)textMarker;	// 0x35718ea5
- (id)accessibilityPlaceholderValue;	// 0x35715729
- (WebAccessibilityObjectWrapper *)accessibilityPostProcessHitTest:(CGPoint)test;	// 0x35713a9d
- (void)accessibilityPostedNotification:(int)notification;	// 0x3571a979
- (BOOL)accessibilityRequired;	// 0x3571668d
- (NSRange)accessibilityRowRange;	// 0x35715545
- (void)accessibilitySetPostedNotificationCallback:(/*function-pointer*/ void *)callback withContext:(void *)context;	// 0x3571a965
- (id)accessibilitySpeechHint;	// 0x3571a755
- (id)accessibilityTitleElement;	// 0x357151bd
- (unsigned long long)accessibilityTraits;	// 0x3571483d
- (id)accessibilityURL;	// 0x35715e31
- (id)accessibilityValue;	// 0x3571577d
- (id)arrayOfTextForTextMarkers:(id)textMarkers attributed:(BOOL)attributed;	// 0x35717429
- (id)attachmentView;	// 0x35716a0d
- (id)attributedStringForRange:(NSRange)range;	// 0x357196d5
- (BOOL)containsUnnaturallySegmentedChildren;	// 0x357162d1
- (void)dealloc;	// 0x35713891
- (void)detach;	// 0x35713845
- (BOOL)determineIsAccessibilityElement;	// 0x35714b41
- (NSRange)elementTextRange;	// 0x35718df1
- (id)elementsForRange:(NSRange)range;	// 0x357196f9
- (CGRect)frameForTextMarkers:(id)textMarkers;	// 0x3571a215
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x35713f41
- (BOOL)isAccessibilityElement;	// 0x35714d0d
- (BOOL)isAttachment;	// 0x357169b1
- (id)lineEndMarkerForMarker:(id)marker;	// 0x35719b35
- (id)lineStartMarkerForMarker:(id)marker;	// 0x35719cf1
- (id)nextMarkerForMarker:(id)marker;	// 0x35719ead
- (int)positionForTextMarker:(id)textMarker;	// 0x35718951
- (void)postChildrenChangedNotification;	// 0x35716ae5
- (void)postFocusChangeNotification;	// 0x35716ad1
- (void)postInvalidStatusChangedNotification;	// 0x35716ae9
- (void)postLayoutChangeNotification;	// 0x35716ad9
- (void)postLiveRegionChangeNotification;	// 0x35716add
- (void)postLoadCompleteNotification;	// 0x35716ae1
- (void)postSelectedTextChangeNotification;	// 0x35716ad5
- (id)previousMarkerForMarker:(id)marker;	// 0x3571a061
- (id)selectedTextMarker;	// 0x357198cd
- (id)selectionRangeString;	// 0x3571989d
- (id)stringForRange:(NSRange)range;	// 0x357196b1
- (id)stringForTextMarkers:(id)textMarkers;	// 0x35717045
- (BOOL)stringValueShouldBeUsedInLabel;	// 0x35714d5d
- (AccessibilityTableCell *)tableCellParent;	// 0x35715145
- (AccessibilityTable *)tableParent;	// 0x35715181
- (id)textMarkerForPoint:(CGPoint)point;	// 0x3571a58d
- (id)textMarkerForPosition:(int)position;	// 0x35719251
- (id)textMarkerRange;	// 0x35718b61
- (id)textMarkerRangeForSelection;	// 0x35718fe5
@end
