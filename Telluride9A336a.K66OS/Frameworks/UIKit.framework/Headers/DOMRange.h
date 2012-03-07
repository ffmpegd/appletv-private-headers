/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <DOMRange.h> // Unknown library
#import "UIKit-Structs.h"
#import "UIWebSelectionBlock.h"


@interface DOMRange (UIWebSelectionAdditions) <UIWebSelectionBlock>
- (id)asDomNode;	// 0x353962f1
- (id)asDomRange;	// 0x35396301
- (CGRect)boundingRect;	// 0x35395e1d
- (CGRect)boundingRectAndInsideFixedPosition:(int *)position;	// 0x35395f6d
- (BOOL)canShrinkDirectlyToTextOnly;	// 0x35396409
- (BOOL)containsBlock:(id)block;	// 0x353961d5
- (BOOL)containsRange:(id)range;	// 0x35396305
- (id)enclosingDocument;	// 0x35396411
- (BOOL)isSameBlock:(id)block;	// 0x35396139
- (id)largerParent;	// 0x35396111
- (id)parentBlock;	// 0x353960cd
- (id)rangeOfContents;	// 0x3539640d
- (BOOL)rendersAsBlock;	// 0x353962c5
- (BOOL)selectable;	// 0x353962c9
- (BOOL)strictlyContainsBlock:(id)block;	// 0x3539624d
- (void)unionWithRange:(id)range;	// 0x35395d0d
- (id)webFrame;	// 0x35209811
@end

