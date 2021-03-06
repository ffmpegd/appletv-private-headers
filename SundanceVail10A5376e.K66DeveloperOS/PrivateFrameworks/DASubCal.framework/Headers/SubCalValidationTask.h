/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */

#import "SubCalURLRequestDelegate.h"
#import "SubCalDATask.h"

@class NSData, NSString, NSURL, SubCalURLRequest;
@protocol SubCalValidationTaskDelegate;

@interface SubCalValidationTask : SubCalDATask <SubCalURLRequestDelegate> {
	id<SubCalValidationTaskDelegate> _delegate;	// 16 = 0x10
	SubCalURLRequest *_request;	// 20 = 0x14
	NSURL *_subscriptionURL;	// 24 = 0x18
	NSString *_username;	// 28 = 0x1c
	NSString *_password;	// 32 = 0x20
	BOOL _performQuickValidation;	// 36 = 0x24
	NSData *_icsData;	// 40 = 0x28
	NSString *_calendarName;	// 44 = 0x2c
	BOOL _foundBeginVCal;	// 48 = 0x30
	BOOL _foundCalName;	// 49 = 0x31
	unsigned _searchIndex;	// 52 = 0x34
}
@property(assign) id<SubCalValidationTaskDelegate> delegate;	// G=0x31228d31; S=0x31228d45; @synthesize=_delegate
@property(retain, nonatomic) NSString *password;	// G=0x31228d9d; S=0x31228dad; @synthesize=_password
@property(assign) BOOL performQuickValidation;	// G=0x31228dbd; S=0x31228dd5; @synthesize=_performQuickValidation
@property(retain, nonatomic) NSURL *subscriptionURL;	// G=0x31228d5d; S=0x31228d6d; @synthesize=_subscriptionURL
@property(retain, nonatomic) NSString *username;	// G=0x31228d7d; S=0x31228d8d; @synthesize=_username
- (BOOL)_isInvalidVCalBeginningForData:(id)data;	// 0x312289a1
- (id)_searchForCalNameInConnectionData:(id)connectionData;	// 0x31228ac5
- (id)_stringBeforeNewline:(const char *)newline length:(unsigned)length;	// 0x31228a19
- (void)_tryQuickValidationCurrentData:(id)data;	// 0x31228bc1
- (void)dealloc;	// 0x3122855d
// declared property getter: - (id)delegate;	// 0x31228d31
- (void)didFinish;	// 0x3122869d
- (void)handleTrustChallenge:(id)challenge forSubCalURLRequest:(id)subCalURLRequest;	// 0x31228821
// declared property getter: - (id)password;	// 0x31228d9d
- (void)performDelegateCallbackWithError:(id)error;	// 0x3122864d
// declared property getter: - (BOOL)performQuickValidation;	// 0x31228dbd
- (void)performTask;	// 0x312286ed
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31228d45
// declared property setter: - (void)setPassword:(id)password;	// 0x31228dad
// declared property setter: - (void)setPerformQuickValidation:(BOOL)validation;	// 0x31228dd5
// declared property setter: - (void)setSubscriptionURL:(id)url;	// 0x31228d6d
// declared property setter: - (void)setUsername:(id)username;	// 0x31228d8d
- (void)subCalURLRequest:(id)request finishedWithData:(id)data error:(id)error;	// 0x31228869
- (void)subCalURLRequest:(id)request updatedData:(id)data;	// 0x31228841
// declared property getter: - (id)subscriptionURL;	// 0x31228d5d
// declared property getter: - (id)username;	// 0x31228d7d
- (void)willFinish;	// 0x31228611
@end

