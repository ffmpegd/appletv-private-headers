/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSSendDraft : MSMailDefaultService {
}
+ (id)sendDraftWithURL:(id)url delegate:(id)delegate;	// 0x34f12c29
+ (id)smi_serverCommandName;	// 0x34f12c1d
- (id)_didSendDraft:(id)draft userInfo:(id)info;	// 0x34f12df1
- (id)_sendMailDraftWithURL:(id)url delegate:(id)delegate;	// 0x34f12cc5
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x34f12f29
@end
