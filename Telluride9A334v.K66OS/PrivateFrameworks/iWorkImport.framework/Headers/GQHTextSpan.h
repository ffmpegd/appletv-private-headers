/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHTextSpan : NSObject {
}
+ (int)handleAttachment:(id)attachment state:(id)state;	// 0x32c01709
+ (int)handleAutoNumber:(id)number state:(id)state;	// 0x32c022dd
+ (int)handleContainerHint:(id)hint state:(id)state;	// 0x32c01831
+ (int)handlePageStart:(id)start state:(id)state;	// 0x32c01705
+ (int)handleSpan:(id)span checkForTrailingBlanks:(BOOL)trailingBlanks state:(id)state;	// 0x32c01889
+ (int)handleTextBackgroundForStyle:(id)style destStyle:(id)style2 state:(id)state;	// 0x32c01ca1
+ (int)handleTextList:(id)list checkForTrailingBlanks:(BOOL)trailingBlanks state:(id)state;	// 0x32c01b51
+ (int)handleTextListChild:(id)child outputBlanks:(BOOL)blanks state:(id)state;	// 0x32c01e19
+ (int)handleTextMarker:(id)marker outputBlanks:(BOOL)blanks state:(id)state;	// 0x32c021f5
+ (int)nonWhitespaceCount:(CFArrayRef)count;	// 0x32c01bed
@end
