/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSSaveEmail : MSMailDefaultService {
}
+ (id)saveEmail:(id)email delegate:(id)delegate;	// 0x337d1aad
+ (id)smi_serverCommandName;	// 0x337d1aa1
- (id)_didSaveEmail:(id)email userInfo:(id)info;	// 0x337d1cc1
- (id)_saveEmail:(id)email delegate:(id)delegate;	// 0x337d1b49
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x337d1df9
@end

