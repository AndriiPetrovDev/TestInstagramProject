//
//  TIDataSource.m
//  TaggedImages
//
//  Created by Андрей on 10/8/15.
//  Copyright © 2015 AndrewPetrov. All rights reserved.
//

#import "TIITaggedPostsDataSource.h"
#import <MagicalRecord.h>
#import "NSFetchedResultsController+Factory.h"

@interface TIITaggedPostsDataSource ()

@property (nonatomic, strong) NSMutableArray *instagramPosts;
@property (nonatomic, strong) NSArray *instagramTags;

@property (nonatomic, strong) NSFetchedResultsController *fetchedResultsController;

@end

@implementation TIITaggedPostsDataSource

- (NSInteger)postCount {
    return [self.fetchedResultsController fetchedObjects].count;
    
}
- (TIInstagramPost *)postAtIndex:(NSInteger)index {
    NSIndexPath *indexPath = [NSIndexPath indexPathForItem:index inSection:0];
    return [self.fetchedResultsController objectAtIndexPath:indexPath];
}
- (NSInteger)tagsCount {
    return 0;
}
- (NSArray *)instagramPosts {
    return [self.fetchedResultsController fetchedObjects];
}

- (NSFetchedResultsController *)fetchedResultsController {
    if (!_fetchedResultsController) {
        _fetchedResultsController = [NSFetchedResultsController postsFRC];
        _fetchedResultsController.delegate = self;
        [_fetchedResultsController performFetch:nil];
    }
    return _fetchedResultsController;
}

@end