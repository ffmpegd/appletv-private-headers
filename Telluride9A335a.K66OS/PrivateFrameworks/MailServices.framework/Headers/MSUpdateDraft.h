/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSUpdateDraft : MSMailDefaultService {
}
+ (id)smi_serverCommandName;	// 0x33f8b841
+ (id)updateDraft:(id)draft withAddedHeaders:(id)addedHeaders removedHeaders:(id)headers newBody:(id)body delegate:(id)delegate;	// 0x33f8b84d
- (id)_didUpdateDraft:(id)draft userInfo:(id)info;	// 0x33f8bae5
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x33f8ba89
- (id)_updateDraft:(id)draft withAddedHeaders:(id)addedHeaders removedHeaders:(id)headers newBody:(id)body delegate:(id)delegate;	// 0x33f8b8f9
@end

