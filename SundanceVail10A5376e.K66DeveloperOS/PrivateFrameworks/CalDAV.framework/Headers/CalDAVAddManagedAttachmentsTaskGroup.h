/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library

@class NSMutableDictionary, NSURL, NSString, NSData, NSDictionary;

@interface CalDAVAddManagedAttachmentsTaskGroup : CoreDAVTaskGroup {
	int _state;	// 44 = 0x2c
	NSURL *_resourceURL;	// 48 = 0x30
	NSURL *_postURLWithQuery;	// 52 = 0x34
	NSString *_previousETag;	// 56 = 0x38
	NSString *_previousScheduleTag;	// 60 = 0x3c
	NSDictionary *_attachments;	// 64 = 0x40
	NSDictionary *_contentTypes;	// 68 = 0x44
	NSMutableDictionary *_filenamesToServerLocation;	// 72 = 0x48
	BOOL _hadPreconditionFailure;	// 76 = 0x4c
	NSData *_updatedResourcePayload;	// 80 = 0x50
	NSString *_updatedETag;	// 84 = 0x54
	NSString *_updatedScheduleTag;	// 88 = 0x58
	NSDictionary *_postFailureSizes;	// 92 = 0x5c
}
@property(retain) NSDictionary *attachments;	// G=0x33815f95; S=0x33815fa9; @synthesize=_attachments
@property(retain) NSDictionary *contentTypes;	// G=0x33815fb9; S=0x33815fcd; @synthesize=_contentTypes
@property(retain) NSMutableDictionary *filenamesToServerLocation;	// G=0x33815fdd; S=0x33815ff1; @synthesize=_filenamesToServerLocation
@property(assign) BOOL hadPreconditionFailure;	// G=0x33816025; S=0x3381603d; @synthesize=_hadPreconditionFailure
@property(retain) NSDictionary *postFailureSizes;	// G=0x3381609d; S=0x338160b1; @synthesize=_postFailureSizes
@property(retain) NSString *previousETag;	// G=0x33815efd; S=0x33815f11; @synthesize=_previousETag
@property(retain) NSString *previousScheduleTag;	// G=0x33815f21; S=0x33815f35; @synthesize=_previousScheduleTag
@property(retain) NSURL *resourceURL;	// G=0x33815f71; S=0x33815f85; @synthesize=_resourceURL
@property(assign) int state;	// G=0x33815f45; S=0x33815f59; @synthesize=_state
@property(retain) NSString *updatedETag;	// G=0x33816055; S=0x33816069; @synthesize=_updatedETag
@property(retain) NSData *updatedResourcePayload;	// G=0x33816001; S=0x33816015; @synthesize=_updatedResourcePayload
@property(retain) NSString *updatedScheduleTag;	// G=0x33816079; S=0x3381608d; @synthesize=_updatedScheduleTag
- (id)initWithAccountInfoProvider:(id)accountInfoProvider resourceURL:(id)url attachments:(id)attachments contentTypes:(id)types taskManager:(id)manager;	// 0x33815355
- (void)_fetchUpdatedContent;	// 0x33815581
- (void)_finishWithError:(id)error state:(int)state;	// 0x33815425
- (void)_handlePostResponse:(id)response;	// 0x338157d9
- (BOOL)_postedLastAttachment;	// 0x33815489
- (void)_sendAttachments;	// 0x33815b1d
// declared property getter: - (id)attachments;	// 0x33815f95
// declared property getter: - (id)contentTypes;	// 0x33815fb9
- (void)dealloc;	// 0x3381523d
// declared property getter: - (id)filenamesToServerLocation;	// 0x33815fdd
// declared property getter: - (BOOL)hadPreconditionFailure;	// 0x33816025
// declared property getter: - (id)postFailureSizes;	// 0x3381609d
// declared property getter: - (id)previousETag;	// 0x33815efd
// declared property getter: - (id)previousScheduleTag;	// 0x33815f21
// declared property getter: - (id)resourceURL;	// 0x33815f71
// declared property setter: - (void)setAttachments:(id)attachments;	// 0x33815fa9
// declared property setter: - (void)setContentTypes:(id)types;	// 0x33815fcd
// declared property setter: - (void)setFilenamesToServerLocation:(id)serverLocation;	// 0x33815ff1
// declared property setter: - (void)setHadPreconditionFailure:(BOOL)failure;	// 0x3381603d
// declared property setter: - (void)setPostFailureSizes:(id)sizes;	// 0x338160b1
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x33815f11
// declared property setter: - (void)setPreviousScheduleTag:(id)tag;	// 0x33815f35
// declared property setter: - (void)setResourceURL:(id)url;	// 0x33815f85
// declared property setter: - (void)setState:(int)state;	// 0x33815f59
// declared property setter: - (void)setUpdatedETag:(id)tag;	// 0x33816069
// declared property setter: - (void)setUpdatedResourcePayload:(id)payload;	// 0x33816015
// declared property setter: - (void)setUpdatedScheduleTag:(id)tag;	// 0x3381608d
- (void)startTaskGroup;	// 0x33815ecd
// declared property getter: - (int)state;	// 0x33815f45
// declared property getter: - (id)updatedETag;	// 0x33816055
// declared property getter: - (id)updatedResourcePayload;	// 0x33816001
// declared property getter: - (id)updatedScheduleTag;	// 0x33816079
- (id)urlWithQuery;	// 0x338154d9
@end
