//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSSiteMetadataImageCacheDelegate.h"
#import "WBSSiteMetadataProvider.h"

@class NSCache, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSURL, WBSSiteMetadataImageCache;

@interface WBSTemplateIconCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _areSettingsLoaded;
    WBSSiteMetadataImageCache *_imageCache;
    NSMutableDictionary *_hostsToRequestSets;
    NSMutableDictionary *_templateIconsDataForHosts;
    NSMutableSet *_pendingTemplateIconRequestHosts;
    NSMutableSet *_pendingTemplateIconFallbackRequestHosts;
    NSMutableSet *_pendingSVGImageRenderingRequests;
    NSMutableDictionary *_requestsToDelayedResponses;
    NSCache *_requestsToResponses;
    BOOL _historyDidFinishLoading;
    BOOL _hasPurgedUnneededItems;
    id <WBSSiteMetadataProviderDelegate> _providerDelegate;
    struct CGSize _defaultIconSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize defaultIconSize; // @synthesize defaultIconSize=_defaultIconSize;
@property(nonatomic) __weak id <WBSSiteMetadataProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
- (void)siteMetadataImageCacheDidEmptyCache:(id)arg1;
- (void)siteMetadataImageCache:(id)arg1 didRemoveImageFromCacheForKeyString:(id)arg2;
- (void)siteMetadataImageCache:(id)arg1 didFinishLoadingImage:(id)arg2 forKeyString:(id)arg3;
- (void)siteMetadataImageCacheDidFinishLoadingSettings:(id)arg1;
- (void)_notifyImageWasLoaded:(id)arg1 forHost:(id)arg2;
- (void)_didLoadHistory:(id)arg1;
- (void)_didRemoveHistoryItems:(id)arg1;
- (void)_didAddHistoryItems:(id)arg1;
- (BOOL)_templateIconRetainerIsReadyForCleanUp;
- (void)_purgeUnneededTemplateIconsIfReady;
- (void)_notifyDidLoadIconForHost:(id)arg1;
- (id)_imageForRequest:(id)arg1 getThemeColor:(id *)arg2;
- (void)_upgradeCacheVersionIfNeeded;
- (void)_removeTemplateIconsDataForHost:(id)arg1;
- (void)_updateTemplateIconsDataForHost:(id)arg1 image:(id)arg2 themeColor:(id)arg3 isSavedToDisk:(BOOL)arg4;
- (void)savePendingChangesBeforeTermination;
- (void)purgeUnneededCacheEntries;
- (void)emptyCaches;
- (BOOL)_shouldRequestTemplateIconForURL:(id)arg1 allowRefresh:(BOOL)arg2;
- (BOOL)shouldRequestTemplateIconForURL:(id)arg1 allowRefresh:(BOOL)arg2;
- (BOOL)hasDeterminedIconAvailabilityForURL:(id)arg1;
- (void)releaseTemplateIconsForHosts:(id)arg1;
- (void)releaseTemplateIconForHost:(id)arg1;
- (void)releaseTemplateIconForURLString:(id)arg1;
- (void)retainTemplateIconsForHosts:(id)arg1;
- (void)retainTemplateIconForHost:(id)arg1;
- (void)retainTemplateIconForURLString:(id)arg1;
- (void)_saveTemplateIcon:(id)arg1 withThemeColor:(id)arg2 forHost:(id)arg3 toDisk:(BOOL)arg4;
- (void)addTemplateIconAtURL:(id)arg1 withThemeColor:(id)arg2 forHost:(id)arg3 toDisk:(BOOL)arg4;
- (id)_monogramForRequest:(id)arg1 themeColor:(id)arg2;
- (void)_generateResponseForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_templateIconForURL:(id)arg1 getThemeColor:(id *)arg2;
- (void)_requestTemplateIconForRequest:(id)arg1;
- (id)templateIconForURL:(id)arg1 getThemeColor:(id *)arg2;
- (BOOL)_isLocalIconRequest:(id)arg1;
- (void)stopWatchingUpdatesForRequest:(id)arg1;
- (void)_registerRequest:(id)arg1;
- (void)_setUpAndReturnPreparedResponseForRequest:(id)arg1;
- (void)_setUpAndReturnDelayedResponseForRequest:(id)arg1;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(char *)arg2;
- (BOOL)canHandleRequest:(id)arg1;
@property(readonly, nonatomic) NSURL *imageDirectoryURL;
- (void)dealloc;
- (id)initWithImageDirectoryURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL providesFavicons;
@property(readonly) Class superclass;

@end

