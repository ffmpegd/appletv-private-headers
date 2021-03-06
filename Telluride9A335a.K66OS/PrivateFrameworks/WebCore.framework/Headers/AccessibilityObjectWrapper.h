/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface AccessibilityObjectWrapper : NSObject {
@private
	AccessibilityObject *m_object;	// 4 = 0x4
	int m_isAccessibilityElement;	// 8 = 0x8
	unsigned long long m_accessibilityTraitsFromAncestor;	// 12 = 0xc
}
- (id)initWithAccessibilityObject:(AccessibilityObject *)accessibilityObject;	// 0x35935a0d
- (void)_accessibilityActivate;	// 0x35b32211
- (BOOL)_accessibilityIsLandmarkRole:(int)role;	// 0x35b032b1
- (id)_accessibilityLandmarkAncestor;	// 0x35b33589
- (id)_accessibilityListAncestor;	// 0x35b2e449
- (id)_accessibilityNextElementsWithCount:(unsigned long)count;	// 0x35b32591
- (id)_accessibilityParentForSubview:(id)subview;	// 0x35b3219d
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)count;	// 0x35b32545
- (id)_accessibilityTableAncestor;	// 0x35b2e48d
- (unsigned long long)_accessibilityTraitsFromAncestors;	// 0x35b02f9d
- (id)_accessibilityWebDocumentView;	// 0x35b325dd
- (BOOL)_addAccessibilityObject:(AccessibilityObject *)object toTextMarkerArray:(id)textMarkerArray;	// 0x35b31c31
- (CGRect)_convertIntRectToScreenCoordinates:(IntRect)screenCoordinates;	// 0x35b32871
- (PassRefPtr<WebCore::Range>)_convertToDOMRange:(NSRange)domrange;	// 0x35b3076d
- (NSRange)_convertToNSRange:(Range *)nsrange;	// 0x35b307ed
- (BOOL)_prepareAccessibilityCall;	// 0x359511f9
- (id)_stringForRange:(NSRange)range attributed:(BOOL)attributed;	// 0x35b2f9d1
- (BOOL)accessibilityARIAIsBusy;	// 0x35b2e7b9
- (BOOL)accessibilityARIALiveRegionIsAtomic;	// 0x35b2e6e5
- (id)accessibilityARIALiveRegionStatus;	// 0x35b2e76d
- (id)accessibilityARIARelevantStatus;	// 0x35b2e721
- (CGPoint)accessibilityActivationPoint;	// 0x35b32751
- (BOOL)accessibilityCanFuzzyHitTest;	// 0x35b33ae5
- (NSRange)accessibilityColumnRange;	// 0x35b3311d
- (id)accessibilityContainer;	// 0x35b05f05
- (void)accessibilityDecreaseSelection:(int)selection;	// 0x35b31e6d
- (void)accessibilityDecrement;	// 0x35b31cc1
- (id)accessibilityElementAtIndex:(int)index;	// 0x35b04b55
- (int)accessibilityElementCount;	// 0x35b0330d
- (void)accessibilityElementDidBecomeFocused;	// 0x35b32165
- (id)accessibilityElementForRow:(int)row andColumn:(int)column;	// 0x35b331ed
- (CGRect)accessibilityElementRect;	// 0x35b327e9
- (id)accessibilityFlowToElements;	// 0x35b3237d
- (id)accessibilityFocusedUIElement;	// 0x35b32691
- (CGRect)accessibilityFrame;	// 0x35b326d1
- (id)accessibilityHeaderElements;	// 0x35b3323d
- (id)accessibilityHint;	// 0x35b32ac9
- (id)accessibilityHitTest:(CGPoint)test;	// 0x35b33915
- (id)accessibilityIdentifier;	// 0x35b2e889
- (void)accessibilityIncreaseSelection:(int)selection;	// 0x35b31e81
- (void)accessibilityIncrement;	// 0x35b31cf9
- (BOOL)accessibilityIsComboBox;	// 0x35b32bf9
- (id)accessibilityLabel;	// 0x35b04e91
- (id)accessibilityLanguage;	// 0x35b335f5
- (id)accessibilityLinkedElement;	// 0x35b32249
- (void)accessibilityModifySelection:(int)selection increase:(BOOL)increase;	// 0x35b31e95
- (void)accessibilityMoveSelectionToMarker:(id)marker;	// 0x35b31d31
- (AccessibilityObject *)accessibilityObject;	// 0x35b06039
- (id)accessibilityObjectForTextMarker:(id)textMarker;	// 0x35b300bd
- (id)accessibilityPlaceholderValue;	// 0x35b330d5
- (id)accessibilityPostProcessHitTest:(CGPoint)test;	// 0x35b2e3a5
- (void)accessibilityPostedNotification:(int)notification;	// 0x35950ed1
- (BOOL)accessibilityRequired;	// 0x35b32509
- (NSRange)accessibilityRowRange;	// 0x35b33185
- (void)accessibilitySetPostedNotificationCallback:(/*function-pointer*/ void *)callback withContext:(void *)context;	// 0x35b2e439
- (id)accessibilitySpeechHint;	// 0x35b2e7f5
- (id)accessibilityTitleElement;	// 0x35b33549
- (unsigned long long)accessibilityTraits;	// 0x35950fed
- (id)accessibilityURL;	// 0x35b3299d
- (id)accessibilityValue;	// 0x35b32c39
- (id)arrayOfTextForTextMarkers:(id)textMarkers attributed:(BOOL)attributed;	// 0x35b30bd5
- (id)attachmentView;	// 0x35b06055
- (id)attributedStringForRange:(NSRange)range;	// 0x35b2f989
- (BOOL)containsUnnaturallySegmentedChildren;	// 0x35b0609d
- (void)dealloc;	// 0x35b07265
- (void)detach;	// 0x35aea0d9
- (BOOL)determineIsAccessibilityElement;	// 0x35b02dd1
- (NSRange)elementTextRange;	// 0x35b30201
- (id)elementsForRange:(NSRange)range;	// 0x35b2f7f9
- (CGRect)frameForTextMarkers:(id)textMarkers;	// 0x35b2ea41
- (int)indexOfAccessibilityElement:(id)accessibilityElement;	// 0x35b33721
- (BOOL)isAccessibilityElement;	// 0x35b02d81
- (BOOL)isAttachment;	// 0x35b03389
- (id)lineEndMarkerForMarker:(id)marker;	// 0x35b2f35d
- (id)lineStartMarkerForMarker:(id)marker;	// 0x35b2f17d
- (id)nextMarkerForMarker:(id)marker;	// 0x35b2efa1
- (int)positionForTextMarker:(id)textMarker;	// 0x35b3056d
- (void)postChildrenChangedNotification;	// 0x35b2e435
- (void)postFocusChangeNotification;	// 0x35b2e421
- (void)postLayoutChangeNotification;	// 0x35b2e429
- (void)postLiveRegionChangeNotification;	// 0x35b2e42d
- (void)postLoadCompleteNotification;	// 0x35b2e431
- (void)postSelectedTextChangeNotification;	// 0x35b2e425
- (id)previousMarkerForMarker:(id)marker;	// 0x35b2edc5
- (id)selectedTextMarker;	// 0x35b2f53d
- (id)selectionRangeString;	// 0x35b2f7c9
- (id)stringForRange:(NSRange)range;	// 0x35b2f9ad
- (id)stringForTextMarkers:(id)textMarkers;	// 0x35b3189d
- (BOOL)stringValueShouldBeUsedInLabel;	// 0x35b05a39
- (AccessibilityTableCell *)tableCellParent;	// 0x35b2e3a9
- (AccessibilityTable *)tableParent;	// 0x35b2e3e5
- (id)textMarkerForPoint:(CGPoint)point;	// 0x35b2e8dd
- (id)textMarkerForPosition:(int)position;	// 0x35b2fc15
- (id)textMarkerRange;	// 0x35b302c5
- (id)textMarkerRangeForSelection;	// 0x35b2fe39
@end

