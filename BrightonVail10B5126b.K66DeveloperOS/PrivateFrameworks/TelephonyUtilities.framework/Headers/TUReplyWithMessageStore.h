/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <NSObject.h> // Unknown library


@interface TUReplyWithMessageStore : NSObject {
}
- (id)init;	// 0x355fa5c9
- (void)_handleMessagesStoreChanged;	// 0x355faf69
- (id)cannedRepliesForSending;	// 0x355fac3d
- (id)cannedRepliesWithCapitalization:(BOOL)capitalization;	// 0x355fa9b5
- (id)cannedReplyActionSheetOptions;	// 0x355fab79
- (id)cannedReplyActionSheetPrefix;	// 0x355fab01
- (id)cannedReplyPrefix;	// 0x355fa705
- (id)cannedReplyPrefixForSending;	// 0x355fa745
- (id)cannedReplySettingsPrefix;	// 0x355fadbd
- (int)count;	// 0x355fa701
- (id)customReplies;	// 0x355fa891
- (void)dealloc;	// 0x355fa661
- (id)defaultRepliesWithCapitalization:(BOOL)capitalization;	// 0x355fa785
- (void)setCustomReply:(id)reply atIndex:(unsigned)index;	// 0x355fae35
@end
