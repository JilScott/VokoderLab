//
//  VOKTasksTableViewController.m
//  VokoderLab
//
//  Created by Jilian Scott on 6/4/15.
//  Copyright (c) 2015 Vokal. All rights reserved.
//

#import "VOKTasksTableViewController.h"
#import "Task.h"
#import "VOKFetchedResultsDS.h"

@interface VOKTasksTableViewController ()

@property (nonatomic) VOKFetchedResultsDS *dataSource;

@end

@implementation VOKTasksTableViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    NSSortDescriptor *sortDescriptor = [NSSortDescriptor sortDescriptorWithKey:@"title" ascending:YES];
    
//    self.dataSource = [[VOKFetchedResultsDataSource alloc] initWithPredicate:nil
//                                                                   cacheName:nil
//                                                                   tableView:self.tableView
//                                                          sectionNameKeyPath:nil
//                                                             sortDescriptors:@[sortDescriptor]
//                                                          managedObjectClass:[Task class]];
    self.dataSource = [[VOKFetchedResultsDS alloc] initWithPredicate:nil
                                                           cacheName:nil
                                                           tableView:self.tableView
                                                  sectionNameKeyPath:nil
                                                     sortDescriptors:@[sortDescriptor]
                                                  managedObjectClass:[Task class]
                                                            delegate:self];
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    [self.tableView reloadData];
}

- (void)fetchResultsDataSourceSelectedObject:(Task *)object
{
    if (object.completed) {
        object.completed = NO;
    } else {
        object.completed = YES;
    }
    

}

#pragma mark - Table view data source

//- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
//{
//    return 1;
//}
//
//- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
//{
//    return self.dataSource.c;
//}

@end
