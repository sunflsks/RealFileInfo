#import <UIKit/UIKit.h>

@interface DOCItemInfoViewController
- (UIViewController*)contentViewController;
- (id)item;
@end

@interface FPItem : NSObject <NSCopying, NSSecureCoding> {
    NSProgress* _progress;
    NSArray* _tags;
    BOOL _downloading;
    BOOL _mostRecentVersionDownloaded;
    BOOL _uploaded;
    BOOL _uploading;
    BOOL _excludedFromSync;
    BOOL _trashed;
    BOOL _shared;
    BOOL _sharedByCurrentUser;
    BOOL _fp_lastModifiedByCurrentUser;
    BOOL _supportsMostRecentVersionDownloaded;
    BOOL _offline;
    BOOL _isUbiquitous;
    BOOL _isContainer;
    BOOL _isContainerPristine;
    BOOL _topLevelSharedItem;
    BOOL _inPinnedFolder;
    BOOL _pinned;
    BOOL _recursivelyDownloaded;
    BOOL _dataless;
    BOOL _downloaded;
    BOOL _pending;
    NSString* _itemIdentifier;
    NSString* _domainIdentifier;
    NSString* _parentItemIdentifier;
    NSDate* _contentModificationDate;
    NSError* _downloadingError;
    NSError* _uploadingError;
    NSNumber* _childItemCount;
    unsigned long long _capabilities;
    unsigned long long _enumerationOrigin;
    NSDictionary* _userInfo;
    NSNumber* _documentSize;
    NSDate* _creationDate;
    NSString* _typeIdentifier;
    NSData* _versionIdentifier;
    NSPersonNameComponents* _ownerNameComponents;
    NSPersonNameComponents* _mostRecentEditorNameComponents;
    NSNumber* _isDownloadRequested;
    NSString* _sharingPermissions;
    NSString* _containerDisplayName;
    NSDictionary* _extendedAttributes;
    id<NSFileProviderItemFlags> _flags;
    NSString* _fp_parentDomainIdentifier;
    NSURL* _fileURL;
    NSArray* _decorations;
    NSString* _filename;
    NSString* _fp_appContainerBundleIdentifier;
    NSString* _preformattedOwnerName;
    NSString* _preformattedMostRecentEditorName;
    NSString* _formerIdentifier;
    NSNumber* _hasUnresolvedConflicts;
    NSString* _spotlightSubDomainIdentifier;
    unsigned long long _state;
    NSString* _placeholdIdentifier;
    NSArray* _hierarchyPath;
    NSString* _hierarchyPathKey;
    NSString* _displayName;
    NSNumber* _favoriteRank;
    NSDate* _lastUsedDate;
    NSString* _cloudContainerIdentifier;
    NSString* _providerID;
    NSData* _fsID;
    NSString* _fileSystemFilename;
}
@property (nonatomic, readonly) unsigned long long depthInHierarchy;
@property (getter=fp_isAddedByCurrentUser, nonatomic, readonly) BOOL fp_addedByCurrentUser;
@property (nonatomic, readonly) NSPersonNameComponents* fp_addedByNameComponents;
@property (nonatomic, readonly) NSString* localizedSharingStatusString;
@property (nonatomic, retain) NSString*
  formerIdentifier; //@synthesize formerIdentifier=_formerIdentifier - In the implementation block
@property (nonatomic, retain)
  NSString* containerDisplayName; //@synthesize containerDisplayName=_containerDisplayName - In the
                                  // implementation block
@property (nonatomic, retain)
  NSNumber* hasUnresolvedConflicts; //@synthesize hasUnresolvedConflicts=_hasUnresolvedConflicts -
                                    // In the implementation block
@property (nonatomic, readonly)
  NSNumber* isDownloadRequested; //@synthesize isDownloadRequested=_isDownloadRequested - In the
                                 // implementation block
@property (nonatomic, retain)
  NSString* sharingPermissions; //@synthesize sharingPermissions=_sharingPermissions - In the
                                // implementation block
@property (nonatomic, readonly) NSString* fp_spotlightDomainIdentifier;
@property (assign, getter=isUbiquitous, nonatomic)
  BOOL ubiquitous; //@synthesize isUbiquitous=_isUbiquitous - In the implementation block
@property (assign, getter=isTopLevelSharedItem, nonatomic)
  BOOL topLevelSharedItem; //@synthesize topLevelSharedItem=_topLevelSharedItem - In the
                           // implementation block
@property (nonatomic, retain) NSString*
  spotlightSubDomainIdentifier; //@synthesize
                                // spotlightSubDomainIdentifier=_spotlightSubDomainIdentifier
                                //- In the implementation block
@property (getter=isPlaceholder, nonatomic, readonly) BOOL placeholder;
@property (assign, nonatomic)
  unsigned long long state; //@synthesize state=_state - In the implementation block
@property (assign, nonatomic)
  NSString* placeholdIdentifier; //@synthesize placeholdIdentifier=_placeholdIdentifier - In the
                                 // implementation block
@property (nonatomic, retain)
  NSArray* hierarchyPath; //@synthesize hierarchyPath=_hierarchyPath - In the implementation block
@property (nonatomic, readonly) NSString*
  hierarchyPathKey; //@synthesize hierarchyPathKey=_hierarchyPathKey - In the implementation block
@property (nonatomic, copy)
  NSString* filename; //@synthesize filename=_filename - In the implementation block
@property (nonatomic, copy)
  NSString* displayName; //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic, copy) NSString* fp_displayName;
@property (nonatomic, copy) NSString*
  typeIdentifier; //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic, copy)
  NSNumber* documentSize; //@synthesize documentSize=_documentSize - In the implementation block
@property (nonatomic, copy)
  NSDate* creationDate; //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic, copy)
  NSDate* contentModificationDate; //@synthesize contentModificationDate=_contentModificationDate -
                                   // In the implementation block
@property (nonatomic, copy)
  NSNumber* favoriteRank; //@synthesize favoriteRank=_favoriteRank - In the implementation block
@property (nonatomic, copy)
  NSDate* lastUsedDate; //@synthesize lastUsedDate=_lastUsedDate - In the implementation block
@property (nonatomic, copy) NSNumber*
  childItemCount; //@synthesize childItemCount=_childItemCount - In the implementation block
@property (nonatomic, retain) id<NSFileProviderItemFlags>
  flags; //@synthesize flags=_flags - In the implementation block
@property (assign, getter=isDataless, nonatomic)
  BOOL dataless; //@synthesize dataless=_dataless - In the implementation block
@property (assign, getter=isRecursivelyDownloaded, nonatomic)
  BOOL recursivelyDownloaded; //@synthesize recursivelyDownloaded=_recursivelyDownloaded - In the
                              // implementation block
@property (assign, getter=isDownloaded, nonatomic)
  BOOL downloaded; //@synthesize downloaded=_downloaded - In the implementation block
@property (assign, getter=isDownloading, nonatomic)
  BOOL downloading; //@synthesize downloading=_downloading - In the implementation block
@property (assign, getter=isMostRecentVersionDownloaded, nonatomic)
  BOOL mostRecentVersionDownloaded; //@synthesize
                                    // mostRecentVersionDownloaded=_mostRecentVersionDownloaded - In
                                    // the implementation block
@property (assign, getter=isUploaded, nonatomic)
  BOOL uploaded; //@synthesize uploaded=_uploaded - In the implementation block
@property (assign, getter=isUploading, nonatomic)
  BOOL uploading; //@synthesize uploading=_uploading - In the implementation block
@property (assign, getter=isExcludedFromSync, nonatomic) BOOL
  excludedFromSync; //@synthesize excludedFromSync=_excludedFromSync - In the implementation block
@property (assign, getter=isTrashed, nonatomic)
  BOOL trashed; //@synthesize trashed=_trashed - In the implementation block
@property (assign, getter=isShared, nonatomic)
  BOOL shared; //@synthesize shared=_shared - In the implementation block
@property (assign, getter=isSharedByCurrentUser, nonatomic)
  BOOL sharedByCurrentUser; //@synthesize sharedByCurrentUser=_sharedByCurrentUser - In the
                            // implementation block
@property (nonatomic, retain)
  NSProgress* progress; //@synthesize progress=_progress - In the implementation block
@property (nonatomic, copy) NSError*
  uploadingError; //@synthesize uploadingError=_uploadingError - In the implementation block
@property (nonatomic, copy) NSError*
  downloadingError; //@synthesize downloadingError=_downloadingError - In the implementation block
@property (assign, nonatomic) unsigned long long
  capabilities; //@synthesize capabilities=_capabilities - In the implementation block
@property (assign, nonatomic)
  unsigned long long enumerationOrigin; //@synthesize enumerationOrigin=_enumerationOrigin - In the
                                        // implementation block
@property (nonatomic, retain) NSPersonNameComponents*
  ownerNameComponents; //@synthesize ownerNameComponents=_ownerNameComponents - In the
                       // implementation block
@property (nonatomic, retain) NSPersonNameComponents*
  mostRecentEditorNameComponents; //@synthesize
                                  // mostRecentEditorNameComponents=_mostRecentEditorNameComponents
                                  //- In the implementation block
@property (nonatomic, retain)
  NSData* versionIdentifier; //@synthesize versionIdentifier=_versionIdentifier - In the
                             // implementation block
@property (nonatomic, retain)
  NSDictionary* userInfo; //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic, copy) NSArray* tags; //@synthesize tags=_tags - In the implementation block
@property (assign, nonatomic) BOOL
  supportsMostRecentVersionDownloaded; //@synthesize
                                       // supportsMostRecentVersionDownloaded=_supportsMostRecentVersionDownloaded
                                       //- In the implementation block
@property (nonatomic, copy) NSString*
  fp_appContainerBundleIdentifier; //@synthesize
                                   // fp_appContainerBundleIdentifier=_fp_appContainerBundleIdentifier
                                   //- In the implementation block
@property (nonatomic, copy) NSString*
  cloudContainerIdentifier; //@synthesize cloudContainerIdentifier=_cloudContainerIdentifier - In
                            // the implementation block
@property (nonatomic, retain)
  NSString* preformattedOwnerName; //@synthesize preformattedOwnerName=_preformattedOwnerName - In
                                   // the implementation block
@property (nonatomic, retain) NSString*
  preformattedMostRecentEditorName; //@synthesize
                                    // preformattedMostRecentEditorName=_preformattedMostRecentEditorName
                                    //- In the implementation block
@property (assign, getter=isPending, nonatomic)
  BOOL pending; //@synthesize pending=_pending - In the implementation block
@property (assign, getter=isOffline, nonatomic)
  BOOL offline; //@synthesize offline=_offline - In the implementation block
@property (assign, getter=isInPinnedFolder, nonatomic)
  BOOL inPinnedFolder; //@synthesize inPinnedFolder=_inPinnedFolder - In the implementation block
@property (assign, getter=isPinned, nonatomic)
  BOOL pinned; //@synthesize pinned=_pinned - In the implementation block
@property (nonatomic, retain)
  NSArray* decorations; //@synthesize decorations=_decorations - In the implementation block
@property (nonatomic, readonly)
  NSString* providerID; //@synthesize providerID=_providerID - In the implementation block
@property (nonatomic, readonly) NSString*
  domainIdentifier; //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic, retain)
  NSURL* fileURL; //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic, readonly) NSString* fp_domainIdentifier;
@property (nonatomic, retain) NSString*
  fp_parentDomainIdentifier; //@synthesize fp_parentDomainIdentifier=_fp_parentDomainIdentifier - In
                             // the implementation block
@property (nonatomic, retain)
  NSDictionary* extendedAttributes; //@synthesize extendedAttributes=_extendedAttributes - In the
                                    // implementation block
@property (nonatomic, retain) NSData* fsID; //@synthesize fsID=_fsID - In the implementation block
@property (nonatomic, readonly) BOOL isFolder;
@property (nonatomic, readonly) BOOL isPackage;
@property (nonatomic, readonly)
  BOOL isContainer; //@synthesize isContainer=_isContainer - In the implementation block
@property (nonatomic, readonly)
  BOOL isContainerPristine; //@synthesize isContainerPristine=_isContainerPristine - In the
                            // implementation block
@property (nonatomic, readonly) BOOL isExternalDownloadPlaceholder;
@property (nonatomic, copy)
  NSString* fileSystemFilename; //@synthesize fileSystemFilename=_fileSystemFilename - In the
                                // implementation block
@property (getter=fp_isLastModifiedByCurrentUser, nonatomic, readonly)
  BOOL fp_lastModifiedByCurrentUser; //@synthesize
                                     // fp_lastModifiedByCurrentUser=_fp_lastModifiedByCurrentUser -
                                     // In the implementation block
@property (nonatomic, readonly) NSString* providerIdentifier;
@property (nonatomic, copy, readonly) NSString* providerDomainID;
@property (getter=isReadable, nonatomic, readonly) BOOL readable;
@property (getter=isWritable, nonatomic, readonly) BOOL writable;
@property (getter=isCloudItem, nonatomic, readonly) BOOL cloudItem;
@property (nonatomic, readonly) NSProgress* uploadingProgress;
@property (nonatomic, readonly) NSProgress* downloadingProgress;
@property (nonatomic, readonly) NSProgress* copyingProgress;
@property (getter=isActionable, nonatomic, readonly) BOOL actionable;
@property (nonatomic, readonly) unsigned long long folderType;
@property (nonatomic, copy, readonly) NSString* appContainerBundleIdentifier;
@property (nonatomic, readonly) NSArray* itemDecorations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString* description;
@property (copy, readonly) NSString* debugDescription;
@property (nonatomic, copy, readonly) NSString*
  itemIdentifier; //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic, copy, readonly)
  NSString* parentItemIdentifier; //@synthesize parentItemIdentifier=_parentItemIdentifier - In the
                                  // implementation block
@property (nonatomic, copy, readonly) NSData* tagData;
@property (getter=isDownloadRequested, copy, readonly) NSNumber* downloadRequested;
@property (getter=isHidden, readonly) BOOL hidden;
@property (getter=fp_isUbiquitous, readonly) BOOL fp_ubiquitous;
@property (readonly) BOOL fp_isContainer;
@property (readonly) BOOL fp_isContainerPristine;
@property (copy, readonly) NSString* fp_cloudContainerIdentifier;
@property (copy, readonly) NSSet* fp_cloudContainerClientBundleIdentifiers;
+ (BOOL)supportsSecureCoding;
+ (id)allUbiquitousResourceKeys;
+ (id)fp_queryFetchAttributes;
+ (id)fp_minimalAttributesForEvictionPriority;
+ (id)fp_minimalAttributesForEviction;
+ (id)placeholderWithCopyOfExistingItem:(id)arg1
                  lastUsageUpdatePolicy:(unsigned long long)arg2
                            underParent:(id)arg3
                     inProviderDomainID:(id)arg4;
+ (id)genericArchivePlaceholderUnderParent:(id)arg1 inProviderDomainID:(id)arg2;
+ (id)archivePlaceholderForItem:(id)arg1 underParent:(id)arg2 inProviderDomainID:(id)arg3;
+ (id)placeholderWithName:(id)arg1
           typeIdentifier:(id)arg2
        contentAccessDate:(id)arg3
              underParent:(id)arg4
       inProviderDomainID:(id)arg5;
+ (id)generatePlaceholderIdentifier;
+ (id)generatePlaceholderIdentifierWithOriginalID:(id)arg1;
+ (id)placeholderWithName:(id)arg1
                 isFolder:(BOOL)arg2
        contentAccessDate:(id)arg3
              underParent:(id)arg4
       inProviderDomainID:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (NSString*)description;
- (id)copyWithZone:(NSZone*)arg1;
- (NSString*)domainIdentifier;
- (NSDictionary*)userInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id<NSFileProviderItemFlags>)flags;
- (NSString*)itemIdentifier;
- (void)setItemIdentifier:(NSString*)arg1;
- (NSString*)providerIdentifier;
- (NSProgress*)progress;
- (unsigned long long)state;
- (void)setUserInfo:(NSDictionary*)arg1;
- (NSString*)typeIdentifier;
- (NSArray*)tags;
- (BOOL)isPackage;
- (NSString*)filename;
- (void)setFilename:(NSString*)arg1;
- (BOOL)isUbiquitous;
- (NSString*)displayName;
- (NSURL*)fileURL;
- (void)setFileURL:(NSURL*)arg1;
- (BOOL)isPlaceholder;
- (void)setState:(unsigned long long)arg1;
- (NSDate*)creationDate;
- (BOOL)isPending;
- (void)setDisplayName:(NSString*)arg1;
- (void)setCreationDate:(NSDate*)arg1;
- (void)setFlags:(id<NSFileProviderItemFlags>)arg1;
- (void)setTags:(NSArray*)arg1;
- (void)setProgress:(NSProgress*)arg1;
- (BOOL)isPinned;
- (void)setPinned:(BOOL)arg1;
- (BOOL)isShared;
- (NSDate*)contentModificationDate;
- (NSNumber*)isDownloadRequested;
- (NSString*)containerDisplayName;
- (BOOL)isSharedByCurrentUser;
- (NSString*)parentItemIdentifier;
- (NSPersonNameComponents*)ownerNameComponents;
- (BOOL)isDownloaded;
- (unsigned long long)capabilities;
- (NSNumber*)documentSize;
- (NSNumber*)childItemCount;
- (NSDictionary*)extendedAttributes;
- (NSDate*)lastUsedDate;
- (NSData*)tagData;
- (NSNumber*)favoriteRank;
- (BOOL)isTrashed;
- (BOOL)isUploaded;
- (BOOL)isUploading;
- (NSError*)uploadingError;
- (BOOL)isDownloading;
- (NSError*)downloadingError;
- (BOOL)isExcludedFromSync;
- (BOOL)isMostRecentVersionDownloaded;
- (NSPersonNameComponents*)mostRecentEditorNameComponents;
- (NSData*)versionIdentifier;
- (NSNumber*)hasUnresolvedConflicts;
- (NSString*)sharingPermissions;
- (NSString*)fp_spotlightDomainIdentifier;
- (NSString*)fp_domainIdentifier;
- (NSString*)fp_parentDomainIdentifier;
- (BOOL)fp_isUbiquitous;
- (BOOL)fp_isContainer;
- (BOOL)fp_isContainerPristine;
- (NSString*)fp_cloudContainerIdentifier;
- (NSSet*)fp_cloudContainerClientBundleIdentifiers;
- (BOOL)isTopLevelSharedItem;
- (NSString*)fileSystemFilename;
- (BOOL)fp_isLastModifiedByCurrentUser;
- (BOOL)fp_isAddedByCurrentUser;
- (NSPersonNameComponents*)fp_addedByNameComponents;
- (NSString*)preformattedOwnerName;
- (NSString*)preformattedMostRecentEditorName;
- (NSArray*)decorations;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setUploaded:(BOOL)arg1;
- (void)setDownloaded:(BOOL)arg1;
- (void)setShared:(BOOL)arg1;
- (NSString*)providerID;
- (void)setProviderID:(NSString*)arg1;
- (BOOL)isWritable;
- (void)setLastUsedDate:(NSDate*)arg1;
- (void)setPending:(BOOL)arg1;
- (BOOL)isOffline;
- (BOOL)isReadable;
- (BOOL)isFolder;
- (void)setExtendedAttributes:(NSDictionary*)arg1;
- (BOOL)isCloudItem;
- (void)setTypeIdentifier:(NSString*)arg1;
- (BOOL)isContainer;
- (void)setTrashed:(BOOL)arg1;
- (void)setContentModificationDate:(NSDate*)arg1;
- (void)setUploading:(BOOL)arg1;
- (void)setDownloading:(BOOL)arg1;
- (void)setFavoriteRank:(NSNumber*)arg1;
- (void)setVersionIdentifier:(NSData*)arg1;
- (void)setContainerDisplayName:(NSString*)arg1;
- (id)toSearchableItem;
- (BOOL)isActionable;
- (void)setOffline:(BOOL)arg1;
- (NSString*)appContainerBundleIdentifier;
- (void)setIsContainer:(BOOL)arg1;
- (id)strippedCopy;
- (id)initWithProviderID:(id)arg1
        domainIdentifier:(id)arg2
          itemIdentifier:(id)arg3
    parentItemIdentifier:(id)arg4
                filename:(id)arg5
             isDirectory:(BOOL)arg6;
- (void)setProviderDomainID:(NSString*)arg1;
- (NSString*)providerDomainID;
- (id)initWithProviderID:(id)arg1
        domainIdentifier:(id)arg2
          itemIdentifier:(id)arg3
    parentItemIdentifier:(id)arg4
                filename:(id)arg5
          typeIdentifier:(id)arg6;
- (id)initWithProviderDomainID:(id)arg1
                itemIdentifier:(id)arg2
          parentItemIdentifier:(id)arg3
                      filename:(id)arg4
                typeIdentifier:(id)arg5;
- (NSString*)formerIdentifier;
- (NSString*)fp_appContainerBundleIdentifier;
- (BOOL)isInPinnedFolder;
- (BOOL)isDataless;
- (BOOL)isRecursivelyDownloaded;
- (unsigned long long)enumerationOrigin;
- (NSString*)placeholdIdentifier;
- (BOOL)supportsMostRecentVersionDownloaded;
- (NSString*)cloudContainerIdentifier;
- (BOOL)isContainerPristine;
- (NSData*)fsID;
- (id)initWithVendorItem:(id)arg1
                provider:(id)arg2
                  domain:(id)arg3
   extensionCapabilities:(unsigned long long)arg4
                 useFPFS:(BOOL)arg5;
- (unsigned long long)folderType;
- (BOOL)isEqualToItem:(id)arg1;
- (id)description:(BOOL)arg1;
- (BOOL)isExternalDownloadPlaceholder;
- (id)_sharedByDecorationType;
- (id)_downloadingStatus;
- (id)initWithProviderDomainID:(id)arg1
                itemIdentifier:(id)arg2
          parentItemIdentifier:(id)arg3
                      filename:(id)arg4
                   isDirectory:(BOOL)arg5;
- (id)fieldDifferencesWithItem:(id)arg1;
- (void)overrideFields:(id)arg1 ofItem:(id)arg2;
- (id)copyAsPending;
- (void)setParentItemIdentifier:(NSString*)arg1;
- (long long)localizedStandardTagsCompare:(id)arg1;
- (void)setFp_SpotlightDomainIdentifier:(id)arg1;
- (NSArray*)itemDecorations;
- (NSProgress*)downloadingProgress;
- (NSProgress*)uploadingProgress;
- (NSProgress*)copyingProgress;
- (id)ubiquitousResourceKeysDiffAgainstItem:(id)arg1;
- (NSString*)fp_displayName;
- (void)setFp_displayName:(NSString*)arg1;
- (void)setMostRecentVersionDownloaded:(BOOL)arg1;
- (void)setDownloadingError:(NSError*)arg1;
- (void)setUploadingError:(NSError*)arg1;
- (void)setExcludedFromSync:(BOOL)arg1;
- (void)setChildItemCount:(NSNumber*)arg1;
- (void)setEnumerationOrigin:(unsigned long long)arg1;
- (void)setDocumentSize:(NSNumber*)arg1;
- (void)setSharedByCurrentUser:(BOOL)arg1;
- (void)setOwnerNameComponents:(NSPersonNameComponents*)arg1;
- (void)setMostRecentEditorNameComponents:(NSPersonNameComponents*)arg1;
- (void)setSharingPermissions:(NSString*)arg1;
- (void)setSupportsMostRecentVersionDownloaded:(BOOL)arg1;
- (void)setUbiquitous:(BOOL)arg1;
- (void)setTopLevelSharedItem:(BOOL)arg1;
- (void)setFp_parentDomainIdentifier:(NSString*)arg1;
- (void)setDecorations:(NSArray*)arg1;
- (void)setInPinnedFolder:(BOOL)arg1;
- (void)setRecursivelyDownloaded:(BOOL)arg1;
- (void)setFp_appContainerBundleIdentifier:(NSString*)arg1;
- (void)setPreformattedOwnerName:(NSString*)arg1;
- (void)setPreformattedMostRecentEditorName:(NSString*)arg1;
- (void)setFormerIdentifier:(NSString*)arg1;
- (void)setHasUnresolvedConflicts:(NSNumber*)arg1;
- (NSString*)spotlightSubDomainIdentifier;
- (void)setSpotlightSubDomainIdentifier:(NSString*)arg1;
- (void)setPlaceholdIdentifier:(NSString*)arg1;
- (NSArray*)hierarchyPath;
- (void)setHierarchyPath:(NSArray*)arg1;
- (NSString*)hierarchyPathKey;
- (void)setDataless:(BOOL)arg1;
- (void)setCloudContainerIdentifier:(NSString*)arg1;
- (void)setFsID:(NSData*)arg1;
- (void)setFileSystemFilename:(NSString*)arg1;
- (void)setIsContainerPristine:(BOOL)arg1;
- (void)setFp_lastModifiedByCurrentUser:(BOOL)arg1;
- (id)initWithSearchableItem:(id)arg1;
- (id)fp_cs_uniqueIdentifier;
- (void*)_coreSpotlightAttributeForKey:(id)arg1;
- (unsigned long long)depthInHierarchy;
- (NSString*)localizedSharingStatusString;
@end

#ifdef __cplusplus
extern "C" {
#endif

void realFileInfo(UILabel* sizeAndKindLabel, UILabel* justKindLabel, FPItem* item);

#ifdef __cplusplus
}
#endif // __cplusplus
