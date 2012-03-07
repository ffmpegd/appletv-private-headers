/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPropPatchTaskDelegate.h"
#import "CoreDAVPropFindTaskDelegate.h"

@class NSURL, CoreDAVPropFindTask, NSString;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVUpdateFreeBusySetTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVPropPatchTaskDelegate> {
	int _state;	// 44 = 0x2c
	NSURL *_inboxURL;	// 48 = 0x30
	NSURL *_urlToAdd;	// 52 = 0x34
	NSString *_suffixToFilterOut;	// 56 = 0x38
	CoreDAVPropFindTask *_fetchTask;	// 60 = 0x3c
}
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(retain) CoreDAVPropFindTask *fetchTask;	// G=0x35950e8d; S=0x35950e69; @synthesize=_fetchTask
@property(retain) NSURL *inboxURL;	// G=0x35950dd9; S=0x35950db5; @synthesize=_inboxURL
@property(assign) int state;	// G=0x359507c9; S=0x359507d9; @synthesize=_state
@property(retain) NSString *suffixToFilterOut;	// G=0x35950e51; S=0x35950e2d; @synthesize=_suffixToFilterOut
@property(retain) NSURL *urlToAdd;	// G=0x35950e15; S=0x35950df1; @synthesize=_urlToAdd
- (id)initWithAccountInfoProvider:(id)accountInfoProvider inboxURL:(id)url urlToAdd:(id)add suffixToFilterOut:(id)filterOut taskManager:(id)manager;	// 0x35951131
- (void)_finishWithError:(id)error state:(int)state;	// 0x359509f9
- (void)_startFetchFreeBusySet;	// 0x359507e9
- (void)_startPropPatchWithURLs:(id)urls;	// 0x35950ea5
- (void)dealloc;	// 0x35950d39
// declared property getter: - (id)fetchTask;	// 0x35950e8d
// declared property getter: - (id)inboxURL;	// 0x35950dd9
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x35950a2d
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x35950cd9
// declared property setter: - (void)setFetchTask:(id)task;	// 0x35950e69
// declared property setter: - (void)setInboxURL:(id)url;	// 0x35950db5
// declared property setter: - (void)setState:(int)state;	// 0x359507d9
// declared property setter: - (void)setSuffixToFilterOut:(id)filterOut;	// 0x35950e2d
// declared property setter: - (void)setUrlToAdd:(id)add;	// 0x35950df1
- (void)startTaskGroup;	// 0x359509e9
// declared property getter: - (int)state;	// 0x359507c9
// declared property getter: - (id)suffixToFilterOut;	// 0x35950e51
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x35950d25
// declared property getter: - (id)urlToAdd;	// 0x35950e15
@end

