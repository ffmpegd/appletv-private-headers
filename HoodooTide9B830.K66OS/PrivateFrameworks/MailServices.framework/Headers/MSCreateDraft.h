/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSCreateDraft : MSMailDefaultService {
}
+ (id)createDraftWithHeaders:(id)headers body:(id)body delegate:(id)delegate;	// 0x33c3696d
+ (id)smi_serverCommandName;	// 0x33c36961
- (id)_createMailDraftWithHeaders:(id)headers body:(id)body delegate:(id)delegate;	// 0x33c36a11
- (id)_didCreateDraft:(id)draft userInfo:(id)info;	// 0x33c36b35
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x33c36c6d
@end
