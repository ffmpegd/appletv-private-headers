/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

#import <CoreDAVResourceTypeItem.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CoreDAVResourceTypeItem (BookmarkDAVExtensions)
@property(retain) CoreDAVItemWithNoChildren *bookmarkBarFolder;	// G=0x303dc9ad; S=0x303dca41; 
@property(retain) CoreDAVItemWithNoChildren *bookmarkFolder;	// G=0x303dc981; S=0x303dca05; 
@property(retain) CoreDAVItemWithNoChildren *bookmarkMenuFolder;	// G=0x303dc9d9; S=0x303dca7d; 
// declared property getter: - (id)bookmarkBarFolder;	// 0x303dc9ad
// declared property getter: - (id)bookmarkFolder;	// 0x303dc981
// declared property getter: - (id)bookmarkMenuFolder;	// 0x303dc9d9
- (id)extraChildWithNameSpace:(id)nameSpace name:(id)name;	// 0x303dc79d
// declared property setter: - (void)setBookmarkBarFolder:(id)folder;	// 0x303dca41
// declared property setter: - (void)setBookmarkFolder:(id)folder;	// 0x303dca05
// declared property setter: - (void)setBookmarkMenuFolder:(id)folder;	// 0x303dca7d
- (void)setExtraChild:(id)child forNameSpace:(id)nameSpace name:(id)name;	// 0x303dc891
@end

