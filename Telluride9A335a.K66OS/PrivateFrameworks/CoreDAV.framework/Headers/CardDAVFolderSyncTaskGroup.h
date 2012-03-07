/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVContainerSyncTaskGroup.h"


@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
	BOOL _isInitialSync;	// 137 = 0x89
}
@property(assign) BOOL isInitialSync;	// G=0x30056d15; S=0x30056d25; @synthesize=_isInitialSync
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager appSpecificDataItemClass:(Class)aClass;	// 0x30056c09
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions syncItemOrder:(BOOL)order context:(void *)context accountInfoProvider:(id)provider taskManager:(id)manager appSpecificDataItemClass:(Class)aClass;	// 0x30056ba5
- (Class)bulkChangeTaskClass;	// 0x30056cf9
- (id)copyGetTaskWithURL:(id)url;	// 0x30056cb5
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x30056c59
- (id)dataContentType;	// 0x30056ced
// declared property getter: - (BOOL)isInitialSync;	// 0x30056d15
// declared property setter: - (void)setIsInitialSync:(BOOL)sync;	// 0x30056d25
@end

