/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSUpdateDraft : MSMailDefaultService {
}
+ (id)smi_serverCommandName;	// 0x34f12841
+ (id)updateDraft:(id)draft withAddedHeaders:(id)addedHeaders removedHeaders:(id)headers newBody:(id)body delegate:(id)delegate;	// 0x34f1284d
- (id)_didUpdateDraft:(id)draft userInfo:(id)info;	// 0x34f12ae5
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x34f12a89
- (id)_updateDraft:(id)draft withAddedHeaders:(id)addedHeaders removedHeaders:(id)headers newBody:(id)body delegate:(id)delegate;	// 0x34f128f9
@end

